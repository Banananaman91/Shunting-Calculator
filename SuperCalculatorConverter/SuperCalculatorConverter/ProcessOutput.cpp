#include "ProcessOutput.h"
#include "ShuntingAlgorithm.h"

using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;

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
