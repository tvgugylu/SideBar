#include "showctrlmgr.h"

#include <QPropertyAnimation>
#include <QPoint>
#include <QSize>
#include <QTimer>
#include <QWidget>
#include <QRect>
#include <QEvent>

#include "SideBarEnum.h"
#include "showcontroller.h"

ShowCtrlMgr::ShowCtrlMgr(QObject *parent)
	: QObject(parent)
{
	m_widget = NULL;
	m_show = true;
	QTimer::singleShot(1000, this, SLOT(onInit()));
}

ShowCtrlMgr::~ShowCtrlMgr()
{
}

bool ShowCtrlMgr::isShow()
{
	return m_show;
}

void ShowCtrlMgr::toShow(bool enable)
{
	if (NULL != m_widget)
	{
		if (m_show != enable)
		{
			onShowCtrl();
		}
	}
}

bool ShowCtrlMgr::eventFilter(QObject *watched, QEvent *event)
{
	if ((event->type() == QEvent::Move) ||
		(event->type() == QEvent::Resize))
	{
		if (NULL != m_widget && m_widget == watched)
		{
			onInit();
		}
	}
	return QObject::eventFilter(watched, event);
}

void ShowCtrlMgr::onShowCtrl()
{
	if (m_show)
	{
		hideWidget();
	}
	else
	{
		showWidget();
	}
	m_show = !m_show;
}

void ShowCtrlMgr::onInit()
{
	if (NULL != m_widget)
	{
		m_oriPos = QPoint(m_widget->geometry().left(), m_widget->geometry().top());
		m_oriSize = m_widget->geometry().size();
		onInitShow();
	}
}

void ShowCtrlMgr::onInitShow()
{
	switch (m_enDirection)
	{
	case SHOW_LEFT:
	{
		m_btnPos = QPoint(m_oriPos.x() + m_oriSize.width(),
			m_oriPos.y() + m_oriSize.height() / 2);
		m_showController->move(m_btnPos);
		showTextArrow(m_hideText, Qt::LeftArrow);
		m_showController->show();
	}
		break;
	case SHOW_RIGHT:
	{
		m_btnPos = QPoint(m_widget->geometry().left()-m_showController->size().width(),
			m_oriPos.y() + m_oriSize.height() / 2);
		m_showController->move(m_btnPos);
		showTextArrow(m_hideText, Qt::RightArrow);
		m_showController->show();
	}
		break;
	case SHOW_UP:
	{
		m_btnPos = QPoint(m_oriPos.x() + m_oriSize.width() / 2, m_oriPos.y() + m_oriSize.height());
		m_showController->move(m_btnPos);
		showTextArrow(m_hideText, Qt::UpArrow);
		m_showController->show();
	}
		break;
	case SHOW_DOWN:
	{
		m_btnPos = QPoint(m_oriPos.x() + m_oriSize.width() / 2, m_oriPos.y() - m_showController->size().height());
		m_showController->move(m_btnPos);
		showTextArrow(m_hideText, Qt::DownArrow);
		m_showController->show();
	}
		break;
	default:
		break;
	}
}

void ShowCtrlMgr::onAnimationFinished()
{
	emit sgAnimationFinished();
}

void ShowCtrlMgr::setTexts(const QString& showText, const QString& hideText)
{
	m_showText = showText;
	m_hideText = hideText;
}

void ShowCtrlMgr::init(QWidget* target, EnDirection direction)
{
	m_widget = target;
	m_enDirection = direction;
	m_showController = new ShowController(target);
	m_showController->setText("__");
	m_showController->adjustSize();
	m_widget->installEventFilter(this);

	connect(this, SIGNAL(sgAnimationFinished()), m_widget, SLOT(onAnimationFinished()));
	connect(m_showController, SIGNAL(sigShowCtrl()), this, SLOT(onShowCtrl()));
}

void ShowCtrlMgr::hideWidget()
{
	QPoint startPos, endPos;
	Qt::ArrowType arrowType;
	calcCtrlAnimationPositions(false, m_enDirection, startPos, endPos, arrowType);

	showTextArrow(m_showText, arrowType);
	m_widget->hide();
	QPropertyAnimation* animation = new QPropertyAnimation(m_showController, "geometry");
	animation->setDuration(250);
	animation->setStartValue(QRect(startPos, m_showController->size()));
	QRect rcEnd = QRect(endPos, m_showController->size());
	animation->setEndValue(rcEnd);
	connect(animation, SIGNAL(finished()), this, SLOT(onAnimationFinished()));
	animation->start();
}

void ShowCtrlMgr::showWidget()
{
	QPoint startPos, endPos;
	Qt::ArrowType arrowType;
	calcCtrlAnimationPositions(true, m_enDirection, startPos, endPos, arrowType);

	showTextArrow(m_hideText, arrowType);
	m_widget->show();
	QPropertyAnimation* animation = new QPropertyAnimation(m_showController, "geometry");
	animation->setDuration(250);
	animation->setStartValue(QRect(startPos, m_showController->size()));
	QRect rcEnd = QRect(endPos, m_showController->size());
	animation->setEndValue(rcEnd);
	connect(animation, SIGNAL(finished()), this, SLOT(onAnimationFinished()));
	animation->start();
}

void ShowCtrlMgr::showTextArrow(const QString& text, Qt::ArrowType arrowType)
{
	m_showController->setArrowType(arrowType);
	if (arrowType == Qt::LeftArrow || arrowType == Qt::RightArrow)
	{
		QString showText;
		for (int nIndex = 0;nIndex < text.size();++nIndex)
		{
			showText.append(text.at(nIndex)).append("\n");
		}
		m_showController->setText(showText);
	}
	else
	{
		m_showController->setText(text);
	}
	m_showController->adjustSize();
}

void ShowCtrlMgr::calcCtrlAnimationPositions(bool isShow, EnDirection direction, 
	QPoint& startPos, QPoint& endPos, Qt::ArrowType& arrowType)
{
	if (!isShow)
	{
		switch (direction)
		{
		case SHOW_LEFT:
		{
			startPos = m_btnPos;
			endPos = QPoint(m_oriPos.x(), m_btnPos.y());
			arrowType = Qt::RightArrow;
		}
			break;
		case SHOW_RIGHT:
		{
			startPos = m_btnPos;
			endPos = QPoint(m_btnPos.x() + m_oriSize.width(), m_btnPos.y());
			arrowType = Qt::LeftArrow;
		}
			break;
		case SHOW_UP:
		{
			startPos = m_btnPos;
			endPos = QPoint(m_btnPos.x(), m_oriPos.y());
			arrowType = Qt::DownArrow;
		}
			break;
		case SHOW_DOWN:
		{
			startPos = m_btnPos;
			endPos = QPoint(m_btnPos.x(), m_btnPos.y() + m_oriSize.height());
			arrowType = Qt::UpArrow;
		}
			break;
		default:
			break;
		}
	}
	else
	{
		startPos = QPoint(m_showController->pos());
		endPos = m_btnPos;
		switch (direction)
		{
		case SHOW_LEFT:
		{
			arrowType = Qt::LeftArrow;
		}
		break;
		case SHOW_RIGHT:
		{
			arrowType = Qt::RightArrow;
		}
		break;
		case SHOW_UP:
		{
			arrowType = Qt::UpArrow;
		}
		break;
		case SHOW_DOWN:
		{
			arrowType = Qt::DownArrow;
		}
		break;
		default:
			break;
		}
	}
}
