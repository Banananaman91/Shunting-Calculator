#include "ProcessOutput.h"
#include "ShuntingAlgorithm.h"
#include "Converter.h"

using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;
using namespace Conversions;

Converter converter;

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
	if (input == "Meter") {
		conversionResult = converter.Meters(output, inputValue);
		return conversionResult;
	}
	else if (input == "Centimeter") {
		conversionResult = converter.Centimeters(output, inputValue);
		return conversionResult;
	}
	else if (input == "Millimeter") {
		conversionResult = converter.Millimeters(output, inputValue);
		return conversionResult;
	}
	else if (input == "Kilometer") {
		conversionResult = converter.Kilometers(output, inputValue);
		return conversionResult;
	}
	else if (input == "Yard") {
		conversionResult = converter.Yards(output, inputValue);
		return conversionResult;
	}
	else if (input == "Mile") {
		conversionResult = converter.Mile(output, inputValue);
		return conversionResult;
	}
	else if (input == "Foot") {
		conversionResult = converter.Foot(output, inputValue);
		return conversionResult;
	}
	else if (input == "Inch") {
		conversionResult = converter.Inch(output, inputValue);
		return conversionResult;
	}
	else if (input == "Nautical Mile") {
		conversionResult = converter.NauticalMile(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}

std::string InputOutput::ProcessOutput::ConvertVolume(std::string input, std::string output, std::string inputValue)
{
	if (input == "Cubic Meter") {
		conversionResult = converter.CubicMeters(output, inputValue);
		return conversionResult;
	}
	else if (input == "Cubic Centimeter") {
		conversionResult = converter.CubicCentimeters(output, inputValue);
		return conversionResult;
	}
	else if (input == "Liter") {
		conversionResult = converter.Liter(output, inputValue);
		return conversionResult;
	}
	else if (input == "Millileter") {
		conversionResult = converter.Millileter(output, inputValue);
		return conversionResult;
	}
	else if (input == "Pint") {
		conversionResult = converter.Pint(output, inputValue);
		return conversionResult;
	}
	else if (input == "Quart") {
		conversionResult = converter.Quart(output, inputValue);
		return conversionResult;
	}
	else if (input == "Gallon") {
		conversionResult = converter.Gallon(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}

std::string InputOutput::ProcessOutput::ConvertWeight(std::string input, std::string output, std::string inputValue)
{
	if (input == "Milligram") {
		conversionResult = converter.Milligram(output, inputValue);
		return conversionResult;
	}
	else if (input == "Gram") {
		conversionResult = converter.Gram(output, inputValue);
		return conversionResult;
	}
	else if (input == "Kilogram") {
		conversionResult = converter.Kilogram(output, inputValue);
		return conversionResult;
	}
	else if (input == "Ounce") {
		conversionResult = converter.Ounce(output, inputValue);
		return conversionResult;
	}
	else if (input == "Pounds") {
		conversionResult = converter.Pounds(output, inputValue);
		return conversionResult;
	}
	else if (input == "Stone") {
		conversionResult = converter.Stone(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}

std::string InputOutput::ProcessOutput::ConvertSpeed(std::string input, std::string output, std::string inputValue)
{
	if (input == "Miles Per Hour") {
		conversionResult = converter.MilesPerHour(output, inputValue);
		return conversionResult;
	}
	else if (input == "Kilometers Per Hour") {
		conversionResult = converter.KilometersPerHour(output, inputValue);
		return conversionResult;
	}
	else if (input == "Feet Per Second") {
		conversionResult = converter.FeetPerSecond(output, inputValue);
		return conversionResult;
	}
	else if (input == "Meters Per Second") {
		conversionResult = converter.MetersPerSecond(output, inputValue);
		return conversionResult;
	}
	else if (input == "Knot") {
		conversionResult = converter.Knot(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}

std::string InputOutput::ProcessOutput::ConvertAngle(std::string input, std::string output, std::string inputValue)
{
	if (input == "Degrees") {
		conversionResult = converter.Degrees(output, inputValue);
		return conversionResult;
	}
	else if (input == "Milliradians") {
		conversionResult = converter.Milliradians(output, inputValue);
		return conversionResult;
	}
	else if (input == "Radians") {
		conversionResult = converter.Radians(output, inputValue);
		return conversionResult;
	}
	else if (input == "Gradians") {
		conversionResult = converter.Gradians(output, inputValue);
		return conversionResult;
	}
	else if (input == "Cycles") {
		conversionResult = converter.Cycles(output, inputValue);
		return conversionResult;
	}
	else if (input == "Revolution") {
		conversionResult = converter.Revolution(output, inputValue);
		return conversionResult;
	}
	else if (input == "Arcsecond") {
		conversionResult = converter.Arcsecond(output, inputValue);
		return conversionResult;
	}
	else if (input == "Arcminute") {
		conversionResult = converter.Arcminute(output, inputValue);
		return conversionResult;
	}

	return conversionResult;
}


