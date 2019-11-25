#include "ProcessOutput.h"
#include "ShuntingAlgorithm.h"
#include "Converter.h"

using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;
using namespace Conversions;

std::string ProcessOutput::InputOutput(std::string input) {
	if (!equationInput.empty() && !isdigit(input.back())) {
		if (!isdigit(equationInput.back()) && input.back() != '(' && equationInput.back() != ')') {
			return equationInput;
		}
	}
	if (!equationInput.empty() && isdigit(equationInput.back())) {
		if (input.back() == '(') {
			return equationInput;
		}
	}
	if (equationInput == "0") {
		equationInput = input;
		return equationInput;
	}
	equationInput += input;
	return equationInput;
}

std::string ProcessOutput::ClearOutput() {
	equationInput = "0";
	resultOutput = "";
	return equationInput;
}

std::string ProcessOutput::RunCalculation() {
	ShuntingAlgorithm shuntingAlgorithm;

	resultOutput = shuntingAlgorithm.ShuntingYardAlgorithm(equationInput);
	previousEquation = equationInput + "\n" + resultOutput;
	equationInput = "";
	return resultOutput;
}

std::string InputOutput::ProcessOutput::ConvertLength(std::string input, std::string output, std::string inputValue)
{
	Converter converter;

	if (input == "Metre") {
		conversionResult = converter.Metres(output, inputValue);
		return conversionResult;
	}
	else if (input == "Centimetre") {
		conversionResult = converter.Centimetres(output, inputValue);
		return conversionResult;
	}
	else if (input == "Millimetre") {
		conversionResult = converter.Millimetres(output, inputValue);
		return conversionResult;
	}
	else if (input == "Kilometre") {
		conversionResult = converter.Kilometres(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}


