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
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_one_clicked()
{
	displayOutput = inputOutput.InputOutput("1");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_three_clicked()
{
	displayOutput = inputOutput.InputOutput("3");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_four_clicked()
{
	displayOutput = inputOutput.InputOutput("4");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_five_clicked()
{
	displayOutput = inputOutput.InputOutput("5");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_six_clicked()
{
	displayOutput = inputOutput.InputOutput("6");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_seven_clicked()
{
	displayOutput = inputOutput.InputOutput("7");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_eight_clicked()
{
	displayOutput = inputOutput.InputOutput("8");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_nine_clicked()
{
	displayOutput = inputOutput.InputOutput("9");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_zero_clicked()
{
	displayOutput = inputOutput.InputOutput("0");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_addition_clicked()
{
	displayOutput = inputOutput.InputOutput("+");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_minus_clicked()
{
	displayOutput = inputOutput.InputOutput("-");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_divide_clicked()
{
	displayOutput = inputOutput.InputOutput("/");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_multiply_clicked()
{
	displayOutput = inputOutput.InputOutput("*");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_modulus_clicked()
{
	displayOutput = inputOutput.InputOutput("%");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_equals_clicked()
{
	displayOutput = inputOutput.RunCalculation();
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_clear_clicked()
{
	inputOutput.ClearOutput();
	ui->displayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_power_clicked()
{
	displayOutput = inputOutput.InputOutput("^");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_rightParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput(")");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_leftParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput("(");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_decimal_clicked()
{
	displayOutput = inputOutput.InputOutput(".");
	ui->displayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_pushButton_clicked()
{
	if (ui->lengthInputList->currentItem() == false || ui->lengthOutputList->currentItem() == false) {
		ui->converterOutput->setText("Select an item");
	}
	else if (ui->converterOutput->text().isEmpty()) {
		ui->converterOutput->setText("Enter a value");
	}
	else {
		QString inputString = ui->lengthInputList->currentItem()->text();
		QString outputString = ui->lengthOutputList->currentItem()->text();
		QString inputValueString = ui->lengthTextInput->toPlainText();
		std::string input = inputString.toStdString();
		std::string output = outputString.toStdString();
		std::string inputValue = inputValueString.toStdString();
		displayOutput = inputOutput.ConvertLength(input, output, inputValue);
		ui->converterOutput->setText(QString::fromStdString(displayOutput));
	}
}

void QtCalculatorConverter::on_volumeConvert_clicked()
{
	if (ui->lengthInputList->currentItem() == false || ui->lengthOutputList->currentItem() == false) {
		ui->converterOutput_2->setText("Select an item");
	}
	else if (ui->converterOutput->text().isEmpty()) {
		ui->converterOutput_2->setText("Enter a value");
	}
	else {
		QString inputString = ui->volumeInputList->currentItem()->text();
		QString outputString = ui->volumeOutputList->currentItem()->text();
		QString inputValueString = ui->volumeTextInput->toPlainText();
		std::string input = inputString.toStdString();
		std::string output = outputString.toStdString();
		std::string inputValue = inputValueString.toStdString();
		displayOutput = inputOutput.ConvertVolume(input, output, inputValue);
		ui->converterOutput_2->setText(QString::fromStdString(displayOutput));
	}
}

void QtCalculatorConverter::on_weightConvert_clicked()
{
	if (ui->lengthInputList->currentItem() == false || ui->lengthOutputList->currentItem() == false) {
		ui->weightOutputText->setText("Select an item");
	}
	else if (ui->converterOutput->text().isEmpty()) {
		ui->weightOutputText->setText("Enter a value");
	}
	else {
		QString inputString = ui->weightInputList->currentItem()->text();
		QString outputString = ui->weightOutputList->currentItem()->text();
		QString inputValueString = ui->weightInputText->toPlainText();
		std::string input = inputString.toStdString();
		std::string output = outputString.toStdString();
		std::string inputValue = inputValueString.toStdString();
		displayOutput = inputOutput.ConvertWeight(input, output, inputValue);
		ui->weightOutputText->setText(QString::fromStdString(displayOutput));
	}
}

void QtCalculatorConverter::on_speedConvert_clicked()
{
	if (ui->lengthInputList->currentItem() == false || ui->lengthOutputList->currentItem() == false) {
		ui->speedOutputText->setText("Select an item");
	}
	else if (ui->converterOutput->text().isEmpty()) {
		ui->speedOutputText->setText("Enter a value");
	}
	else {
		QString inputString = ui->speedInputList->currentItem()->text();
		QString outputString = ui->speedOutputList->currentItem()->text();
		QString inputValueString = ui->speedInputText->toPlainText();
		std::string input = inputString.toStdString();
		std::string output = outputString.toStdString();
		std::string inputValue = inputValueString.toStdString();
		displayOutput = inputOutput.ConvertSpeed(input, output, inputValue);
		ui->speedOutputText->setText(QString::fromStdString(displayOutput));
	}
}

void QtCalculatorConverter::on_angleConvert_clicked()
{
	if (ui->lengthInputList->currentItem() == false || ui->lengthOutputList->currentItem() == false) {
		ui->angleOutputText->setText("Select an item");
	}
	else if (ui->converterOutput->text().isEmpty()) {
		ui->angleOutputText->setText("Enter a value");
	}
	else {
		QString inputString = ui->angleInputList->currentItem()->text();
		QString outputString = ui->angleOutputList->currentItem()->text();
		QString inputValueString = ui->angleInputText->toPlainText();
		std::string input = inputString.toStdString();
		std::string output = outputString.toStdString();
		std::string inputValue = inputValueString.toStdString();
		displayOutput = inputOutput.ConvertAngle(input, output, inputValue);
		ui->angleOutputText->setText(QString::fromStdString(displayOutput));
	}
}
void QtCalculatorConverter::on_gameZero_clicked()
{
	displayOutput = inputOutput.InputOutput("0");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameOne_clicked()
{
	displayOutput = inputOutput.InputOutput("1");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameTwo_clicked()
{
	displayOutput = inputOutput.InputOutput("2");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameThree_clicked()
{
	displayOutput = inputOutput.InputOutput("3");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameFour_clicked()
{
	displayOutput = inputOutput.InputOutput("4");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameFive_clicked()
{
	displayOutput = inputOutput.InputOutput("5");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameSix_clicked()
{
	displayOutput = inputOutput.InputOutput("6");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameSeven_clicked()
{
	displayOutput = inputOutput.InputOutput("7");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameEight_clicked()
{
	displayOutput = inputOutput.InputOutput("8");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameNine_clicked()
{
	displayOutput = inputOutput.InputOutput("9");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameAddition_clicked()
{
	displayOutput = inputOutput.InputOutput("+");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameMinus_clicked()
{
	displayOutput = inputOutput.InputOutput("-");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameMultiply_clicked()
{
	displayOutput = inputOutput.InputOutput("*");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameDivide_clicked()
{
	displayOutput = inputOutput.InputOutput("/");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameModulus_clicked()
{
	displayOutput = inputOutput.InputOutput("%");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameLeftParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput("(");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameRightParentheses_clicked()
{
	displayOutput = inputOutput.InputOutput(")");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gamePower_clicked()
{
	displayOutput = inputOutput.InputOutput("^");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameDecimal_clicked()
{
	displayOutput = inputOutput.InputOutput("^");
	ui->gameDisplayLabel->setText(QString::fromStdString(displayOutput));
}

void QtCalculatorConverter::on_gameClear_clicked()
{
	inputOutput.ClearOutput();
	ui->gameDisplayLabel->setText(QString::fromStdString(inputOutput.equationInput));
}

void QtCalculatorConverter::on_gameEquals_clicked()
{
	displayOutput = inputOutput.RunGameCalculation();
	std::string numberResult = ui->gameNumberResult->text().toStdString();
	if (displayOutput == ui->gameNumberResult->text().toStdString() && previousGameNumber != ui->gameNumberResult->text().toInt()) {
		ui->gameWinLoseDisplay->setText("Win");
		points += 10;
		ui->gamePointsDisplay->setText(QString::number(points));
		previousGameNumber = ui->gameNumberResult->text().toInt();
	}
	else if (previousGameNumber == ui->gameNumberResult->text().toInt()) {
		ui->gameDisplayLabel->setText("Press Play");
	}
	else {
		ui->gameWinLoseDisplay->setText("Lose");
		points -= 10;
		ui->gamePointsDisplay->setText(QString::number(points));
		previousGameNumber = ui->gameNumberResult->text().toInt();
	}
	
}

void QtCalculatorConverter::on_gameStart_clicked()
{
	int randResult = rand() % 999 + 1;
	ui->gameNumberResult->setText(QString::number(randResult));
}
