#include "sidebarapp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SideBarApp w;
	w.show();
	return a.exec();
}
