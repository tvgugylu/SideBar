#include "showcontroller.h"
#include "ui_showcontroller.h"

ShowController::ShowController(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::ShowController();
	ui->setupUi(this);

	this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
}

ShowController::~ShowController()
{
	delete ui;
}

void ShowController::setText(const QString& text)
{
	ui->btnShowCtrl->setText(text);
}

void ShowController::setArrowType(Qt::ArrowType arrowType)
{
	ui->btnShowCtrl->setArrowType(arrowType);
}

void ShowController::on_btnShowCtrl_clicked()
{
	emit sigShowCtrl();
}
