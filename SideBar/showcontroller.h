#pragma once

#include <QDialog>
namespace Ui { class ShowController; };

class ShowController : public QDialog
{
	Q_OBJECT

public:
	ShowController(QWidget *parent = Q_NULLPTR);
	~ShowController();
	
	void setText(const QString& text);
	void setArrowType(Qt::ArrowType arrowType);

signals:
	void sigShowCtrl();

protected slots:
	void on_btnShowCtrl_clicked();

private:
	Ui::ShowController *ui;
};
