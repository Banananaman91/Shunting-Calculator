#include "qtcalculatorconverter.h"
#include "ui_qtcalculatorconverter.h"
#include "Output.h"
using namespace InputOutput;

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

void QtCalculatorConverter::on_two_clicked()
{
	Output inputOutput;
	//inputOutput.resultOutput += "2";
	displayOutput = inputOutput.InputOutput("2");
	//ui->numberDisplay->display(std::stoi(inputOutput.resultOutput));
}

void QtCalculatorConverter::on_one_clicked()
{
	//inputOutput.InputOutput("1");
	//ui->numberDisplay->display(std::stoi(inputOutput.resultOutput));
}

void QtCalculatorConverter::on_three_clicked()
{

}

void QtCalculatorConverter::on_four_clicked()
{

}

void QtCalculatorConverter::on_five_clicked()
{

}

void QtCalculatorConverter::on_six_clicked()
{

}

void QtCalculatorConverter::on_seven_clicked()
{

}

void QtCalculatorConverter::on_eight_clicked()
{

}

void QtCalculatorConverter::on_nine_clicked()
{

}

void QtCalculatorConverter::on_zero_clicked()
{

}

void QtCalculatorConverter::on_numberDisplay_windowIconTextChanged(const QString &iconText)
{
	
}

void QtCalculatorConverter::on_pushButton_clicked()
{

}
