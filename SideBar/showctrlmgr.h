#pragma once

#include <QObject>
#include <QSize>
#include <QPoint>

#include "SideBarEnum.h"

class ShowController;

class ShowCtrlMgr : public QObject
{
	Q_OBJECT

public:
	ShowCtrlMgr(QObject *parent);
	~ShowCtrlMgr();

	bool isShow();
	void toShow(bool enable);

	virtual bool eventFilter(QObject *watched, QEvent *event) override;

signals:
	void sgAnimationFinished();

public slots:
	virtual void onShowCtrl();
	void onInit();
	virtual void onInitShow();
	void onAnimationFinished();

public:
	void setTexts(const QString& showText, const QString& hideText);
	void init(QWidget* target, EnDirection direction);

protected:
	void hideWidget();
	void showWidget();
	void showTextArrow(const QString& text, Qt::ArrowType arrowType);

	/*
	 *	计算显控按钮动画初始位置与结束位置
	 */
	void calcCtrlAnimationPositions(bool isShow, EnDirection direction,
		QPoint& startPos, QPoint& endPos, Qt::ArrowType& arrowType);

private:
	QWidget* m_widget;
	ShowController* m_showController;

	EnDirection m_enDirection;
	bool m_show;
	QString m_hideText;
	QString m_showText;
	QPoint m_oriPos;
	QSize m_oriSize;
	QPoint m_btnPos;
};
