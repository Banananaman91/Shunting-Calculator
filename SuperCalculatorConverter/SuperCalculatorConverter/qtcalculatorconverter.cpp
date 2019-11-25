#include "qtcalculatorconverter.h"
#include "ui_qtcalculatorconverter.h"
#include "ProcessOutput.h"
#include <QString>
using namespace InputOutput;

ProcessOutput inputOutput;

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
	displayOutput = inputOutput.InputOutput("2");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_one_clicked()
{
	displayOutput = inputOutput.InputOutput("1");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_three_clicked()
{
	displayOutput = inputOutput.InputOutput("3");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_four_clicked()
{
	displayOutput = inputOutput.InputOutput("4");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_five_clicked()
{
	displayOutput = inputOutput.InputOutput("5");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_six_clicked()
{
	displayOutput = inputOutput.InputOutput("6");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_seven_clicked()
{
	displayOutput = inputOutput.InputOutput("7");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_eight_clicked()
{
	displayOutput = inputOutput.InputOutput("8");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_nine_clicked()
{
	displayOutput = inputOutput.InputOutput("9");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_zero_clicked()
{
	displayOutput = inputOutput.InputOutput("0");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_addition_clicked()
{
	displayOutput = inputOutput.InputOutput("+");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_minus_clicked()
{
	displayOutput = inputOutput.InputOutput("-");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_divide_clicked()
{
	displayOutput = inputOutput.InputOutput("/");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_multiply_clicked()
{
	displayOutput = inputOutput.InputOutput("*");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_equals_clicked()
{
	inputOutput.RunCalculation();
	ui->displayLabel->setText(QString::fromStdString(inputOutput.previousEquation));
}

void QtCalculatorConverter::on_clear_clicked()
{
	inputOutput.ClearOutput();
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_power_clicked()
{
	displayOutput = inputOutput.InputOutput("^");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_rightParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput(")");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_leftParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput("(");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_decimal_clicked()
{
	displayOutput = inputOutput.InputOutput(".");
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_pushButton_clicked()
{
	QString inputString = ui->lengthInputList->currentItem()->text();
	QString outputString = ui->lengthOutputList->currentItem()->text();
	QString inputValueString = ui->lengthTextInput->toPlainText();
	std::string input = inputString.toStdString();
	std::string output = outputString.toStdString();
	std::string inputValue = inputValueString.toStdString();
	displayOutput = inputOutput.ConvertLength(input, output, inputValue);
	ui->converterOutput->setText(QString::fromStdString(displayOutput));
}
