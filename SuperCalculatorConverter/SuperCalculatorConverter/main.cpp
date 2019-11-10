#include <QApplication>
#include "qtcalculatorconverter.h"

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	QtCalculatorConverter w;
	w.show();
	return a.exec();
}
