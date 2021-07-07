#include "sidebarapp.h"

SideBarApp::SideBarApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->showMaximized();
}

void SideBarApp::on_btn_popupLeft_clicked()
{
	m_leftWidget = new TextWidget(this);
	m_leftWidget->setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

	QPoint globalPos = QPoint(geometry().left(), geometry().top());

	m_leftWidget->setGeometry(globalPos.x() + 0, globalPos.y() + 60, 200, 900);
	m_leftWidget->initSideBar(m_leftWidget, SHOW_LEFT, QString::fromLocal8Bit("显示列表"), QString::fromLocal8Bit("隐藏列表"));
	m_leftWidget->show();
}

void SideBarApp::on_btn_popupRight_clicked()
{
	m_rightWidget = new TextWidget(this);
	m_rightWidget->setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

	QPoint globalPos = QPoint(geometry().left(), geometry().top());

	m_rightWidget->setGeometry(geometry().right() - 200, globalPos.y() + 60, 200, 900);
	m_rightWidget->initSideBar(m_rightWidget, SHOW_RIGHT, QString::fromLocal8Bit("显示列表"), QString::fromLocal8Bit("隐藏列表"));
	m_rightWidget->show();
}

void SideBarApp::on_btn_popupUp_clicked()
{
	m_upWidget = new TextWidget(this);
	m_upWidget->setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

	QPoint globalPos = QPoint(geometry().left(), geometry().top());

	m_upWidget->setGeometry(globalPos.x() + 300, globalPos.y(), 1300, 300);
	m_upWidget->initSideBar(m_upWidget, SHOW_UP, QString::fromLocal8Bit("显示列表"), QString::fromLocal8Bit("隐藏列表"));
	m_upWidget->show();
}

void SideBarApp::on_btn_popupDown_clicked()
{
	m_downWidget = new TextWidget(this);
	m_downWidget->setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

	QPoint globalPos = QPoint(geometry().left(), geometry().top());

	m_downWidget->setGeometry(globalPos.x() + 300, 700, 1300, 300);
	m_downWidget->initSideBar(m_downWidget, SHOW_DOWN, QString::fromLocal8Bit("显示列表"), QString::fromLocal8Bit("隐藏列表"));
	m_downWidget->show();
}
