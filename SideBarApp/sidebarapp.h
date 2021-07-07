#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sidebarapp.h"

#include "textwidget.h"

class SideBarApp : public QMainWindow
{
	Q_OBJECT

public:
	SideBarApp(QWidget *parent = Q_NULLPTR);

public slots:
	void on_btn_popupLeft_clicked();
	void on_btn_popupRight_clicked();
	void on_btn_popupUp_clicked();
	void on_btn_popupDown_clicked();

private:
	Ui::SideBarAppClass ui;
	TextWidget* m_leftWidget;
	TextWidget* m_rightWidget;
	TextWidget* m_upWidget;
	TextWidget* m_downWidget;
};
