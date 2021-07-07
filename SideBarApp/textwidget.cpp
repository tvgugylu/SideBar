#include "textwidget.h"
#include "ui_textwidget.h"

TextWidget::TextWidget(QWidget *parent)
	: QWidget(parent),SideBar(parent)
{
	ui = new Ui::TextWidget();
	ui->setupUi(this);
}

TextWidget::~TextWidget()
{
	delete ui;
}
