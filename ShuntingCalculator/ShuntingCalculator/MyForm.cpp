#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ShuntingCalculator::MyForm form;
	Application::Run(% form);
}

void ShuntingCalculator::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output("1");
}

void ShuntingCalculator::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("2");
}

void ShuntingCalculator::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("3");
}

void ShuntingCalculator::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("4");
}

void ShuntingCalculator::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("5");
}

void ShuntingCalculator::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("6");
}

void ShuntingCalculator::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("7");
}

void ShuntingCalculator::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("8");
}

void ShuntingCalculator::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("9");
}

void ShuntingCalculator::MyForm::button0_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = textOutput.output("0");
}

void ShuntingCalculator::MyForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		//Clear text output
		textOutput.clearOutput();
		this->textBox1->Text = textOutput.output("");
}

void ShuntingCalculator::MyForm::buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	textOutput.runCalculation();
}

void ShuntingCalculator::MyForm::buttonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output(".");
}

void ShuntingCalculator::MyForm::buttonAddition_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output("+");
}

void ShuntingCalculator::MyForm::buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output("-");
}

void ShuntingCalculator::MyForm::buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output("/");
}

void ShuntingCalculator::MyForm::buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textOutput.output("*");
}