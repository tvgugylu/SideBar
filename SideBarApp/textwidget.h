#pragma once

#include <QWidget>
namespace Ui { class TextWidget; };

#include "../SideBar/sidebar.h"

class TextWidget : public QWidget, public SideBar
{
	Q_OBJECT

public:
	TextWidget(QWidget *parent = Q_NULLPTR);
	~TextWidget();

private:
	Ui::TextWidget *ui;
};
