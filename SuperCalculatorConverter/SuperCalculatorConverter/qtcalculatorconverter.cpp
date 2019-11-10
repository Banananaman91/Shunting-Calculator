#include "qtcalculatorconverter.h"
#include "ui_qtcalculatorconverter.h"

QtCalculatorConverter::QtCalculatorConverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtCalculatorConverter)
{
    ui->setupUi(this);
}

QtCalculatorConverter::~QtCalculatorConverter()
{
    delete ui;
}
