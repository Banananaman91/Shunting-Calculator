#include "ProcessOutput.h"
#include "ShuntingAlgorithm.h"

using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;

std::string Output::InputOutput(std::string input) {
	if (!resultOutput.empty() && !isdigit(input.back())) {
		if (!isdigit(resultOutput.back()) && input.back() != '(' && resultOutput.back() != ')') {
			return resultOutput;
		}
	}
	if (!resultOutput.empty() && isdigit(resultOutput.back())) {
		if (input.back() == '(') {
			return resultOutput;
		}
	}
	resultOutput += input;
	return resultOutput;
}

std::string Output::ClearOutput() {
	resultOutput = "";
	return resultOutput;
}

std::string Output::RunCalculation() {
	ShuntingAlgorithm shuntingAlgorithm;

	resultOutput = shuntingAlgorithm.ShuntingYardAlgorithm(resultOutput);
	return resultOutput;
}

std::string Output::PreviousCalculation()
{
	previousEquation = resultOutput + "\n";
	return previousEquation;
}
