#include "Converter.h"
using namespace Conversions;

std::string Conversions::Converter::Meters(std::string output, std::string inputValue)
{
	if (output == "Centimeter") {
		result = std::to_string(std::stoi(inputValue) * 100);
		return result;
	}
	else if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stoi(inputValue) * 1000);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) / 1000);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 1.094);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0006213712);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 3.28084);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 39.37008);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0005399565);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Centimeters(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) / 100);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stoi(inputValue) * 10);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) / 100000);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 0.01093613);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.000006213712);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 0.0328084);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 0.3937008);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.000005399565);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Kilometers(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stoi(inputValue) * 1000);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stoi(inputValue) * 1000000);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stoi(inputValue) * 100000);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 1093.613);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.6213712);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 3280.84);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 39370.08);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.5399565);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Millimeters(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) / 1000);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) / 10);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) / 1000000);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 0.001093613);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0000006213712);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 0.00328084);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 0.03937008);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0000005399565);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Yards(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 0.9144);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 91.44);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 0.0009144);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 914.4);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0005681818);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 3);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 36);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0004937363);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Mile(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 1609.344);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 160934.4);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 1.609344);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 1609344);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 5280);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 63360);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.8689758);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 1760);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Foot(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 0.3048);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 30.48);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 0.0003048);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 304.8);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0001893939);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 12);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0001645788);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) / 3);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Inch(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 0.0254);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 2.54);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 0.0000254);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 25.4);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 0.00001578283);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) / 12);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 0.0000137149);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 0.02777778);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::NauticalMile(std::string output, std::string inputValue)
{
	if (output == "Meter") {
		result = std::to_string(std::stod(inputValue) * 1852.001);
		return result;
	}
	else if (output == "Centimeter") {
		result = std::to_string(std::stod(inputValue) * 185200.1);
		return result;
	}
	else if (output == "Kilometer") {
		result = std::to_string(std::stod(inputValue) * 1.852001);
		return result;
	}
	else if (output == "Millimeter") {
		result = std::to_string(std::stod(inputValue) * 1852001);
		return result;
	}
	else if (output == "Mile") {
		result = std::to_string(std::stod(inputValue) * 1.15078);
		return result;
	}
	else if (output == "Foot") {
		result = std::to_string(std::stod(inputValue) * 6076.118);
		return result;
	}
	else if (output == "Inch") {
		result = std::to_string(std::stod(inputValue) * 72913.42);
		return result;
	}
	else if (output == "Nautical Mile") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Yard") {
		result = std::to_string(std::stod(inputValue) * 2025.373);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::CubicMeters(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 1000000);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 1000000);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 2113.3774149);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 1056.6887074);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 264.17217686);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::CubicCentimeters(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.000001);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 0.0021133774);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 0.0010566887);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 0.0002641722);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Liter(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 2.1133774149);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 1.0566887074);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 0.2641721769);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Millileter(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.000001);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 0.0021133774);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 0.0010566887);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 0.0002641722);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Pint(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.0004731763);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 473.17625);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 0.47317625);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 473.17625);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 0.5);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 0.125);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Quart(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.0009463525);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 946.3525);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 0.9463525);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 946.3525);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 2);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 0.25);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Gallon(std::string output, std::string inputValue)
{
	if (output == "Cubic Meter") {
		result = std::to_string(std::stod(inputValue) * 0.00378541);
		return result;
	}
	else if (output == "Cubic Centimeter") {
		result = std::to_string(std::stod(inputValue) * 3785.41);
		return result;
	}
	else if (output == "Liter") {
		result = std::to_string(std::stod(inputValue) * 3.78541);
		return result;
	}
	else if (output == "Millileter") {
		result = std::to_string(std::stod(inputValue) * 3785.41);
		return result;
	}
	else if (output == "Pint") {
		result = std::to_string(std::stod(inputValue) * 8);
		return result;
	}
	else if (output == "Quart") {
		result = std::to_string(std::stod(inputValue) * 4);
		return result;
	}
	else if (output == "Gallon") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Milligram(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 0.000001);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 0.000035274);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 0.0000022046);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 0.000000157473);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Gram(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 0.0352739907);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 0.0022046244);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 0.000157473);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Kilogram(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 1000000);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 35.273990723);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 2.2046244202);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 0.157473);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Ounce(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 28349.5);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 28.3495);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 0.0283495);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 0.0625);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 0.004464286);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Pounds(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 453592);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 453.592);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 0.453592);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 16);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 0.07142857);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Stone(std::string output, std::string inputValue)
{
	if (output == "Milligram") {
		result = std::to_string(std::stod(inputValue) * 6350293);
		return result;
	}
	else if (output == "Gram") {
		result = std::to_string(std::stod(inputValue) * 6350.293);
		return result;
	}
	else if (output == "Kilogram") {
		result = std::to_string(std::stod(inputValue) * 6.350293);
		return result;
	}
	else if (output == "Ounce") {
		result = std::to_string(std::stod(inputValue) * 224);
		return result;
	}
	else if (output == "Pounds") {
		result = std::to_string(std::stod(inputValue) * 14);
		return result;
	}
	else if (output == "Stone") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::MilesPerHour(std::string output, std::string inputValue)
{
	if (output == "Miles Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Kilometers Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1.609344);
		return result;
	}
	else if (output == "Feet Per Second") {
		result = std::to_string(std::stod(inputValue) * 1.466667);
		return result;
	}
	else if (output == "Meters Per Second") {
		result = std::to_string(std::stod(inputValue) * 0.44704);
		return result;
	}
	else if (output == "Knot") {
		result = std::to_string(std::stod(inputValue) * 0.8689758);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::KilometersPerHour(std::string output, std::string inputValue)
{
	if (output == "Miles Per Hour") {
		result = std::to_string(std::stod(inputValue) * 0.6213712);
		return result;
	}
	else if (output == "Kilometers Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Feet Per Second") {
		result = std::to_string(std::stod(inputValue) * 0.9113444);
		return result;
	}
	else if (output == "Meters Per Second") {
		result = std::to_string(std::stod(inputValue) * 0.2777778);
		return result;
	}
	else if (output == "Knot") {
		result = std::to_string(std::stod(inputValue) * 0.5399565);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::FeetPerSecond(std::string output, std::string inputValue)
{
	if (output == "Miles Per Hour") {
		result = std::to_string(std::stod(inputValue) * 0.6818182);
		return result;
	}
	else if (output == "Kilometers Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1.09728);
		return result;
	}
	else if (output == "Feet Per Second") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Meters Per Second") {
		result = std::to_string(std::stod(inputValue) * 0.3048);
		return result;
	}
	else if (output == "Knot") {
		result = std::to_string(std::stod(inputValue) * 0.5924835);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::MetersPerSecond(std::string output, std::string inputValue)
{
	if (output == "Miles Per Hour") {
		result = std::to_string(std::stod(inputValue) * 2.236936);
		return result;
	}
	else if (output == "Kilometers Per Hour") {
		result = std::to_string(std::stod(inputValue) * 3.6);
		return result;
	}
	else if (output == "Feet Per Second") {
		result = std::to_string(std::stod(inputValue) * 3.28084);
		return result;
	}
	else if (output == "Meters Per Second") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Knot") {
		result = std::to_string(std::stod(inputValue) * 1.943844);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Knot(std::string output, std::string inputValue)
{
	if (output == "Miles Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1.15078);
		return result;
	}
	else if (output == "Kilometers Per Hour") {
		result = std::to_string(std::stod(inputValue) * 1.852001);
		return result;
	}
	else if (output == "Feet Per Second") {
		result = std::to_string(std::stod(inputValue) * 1.687811);
		return result;
	}
	else if (output == "Meters Per Second") {
		result = std::to_string(std::stod(inputValue) * 0.5144447);
		return result;
	}
	else if (output == "Knot") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Degrees(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 17.45329);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 0.01745329);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 1.111111);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.002777778);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.002777771);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 3600);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 60);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Milliradians(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 0.05729578);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 0.001);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 0.06366198);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.0001591549);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.0001591546);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 206.2648);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 3.437747);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Radians(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 57.29578);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 1000);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 63.66198);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.1591549);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.1591546);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 206264.8);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 3437.747);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Gradians(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 0.9);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 15.70796);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 0.01570796);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.0025);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.002499994);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 3240);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 54);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Cycles(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 360);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 6283.185);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 6.283185);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 400);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.9999977);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 1296000);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 21600);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Revolution(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 360.0008);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 6283.2);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 6.2832);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 400.0009);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 1.000002);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 1296003);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 21600.05);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Arcsecond(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 0.0002777778);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 0.004848137);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 0.000004848137);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 0.000308642);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.0000007716049);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.0000007716031);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) / 60);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Arcminute(std::string output, std::string inputValue)
{
	if (output == "Degrees") {
		result = std::to_string(std::stod(inputValue) * 0.01666667);
		return result;
	}
	else if (output == "Milliradians") {
		result = std::to_string(std::stod(inputValue) * 0.2908882);
		return result;
	}
	else if (output == "Radians") {
		result = std::to_string(std::stod(inputValue) * 0.0002908882);
		return result;
	}
	else if (output == "Gradians") {
		result = std::to_string(std::stod(inputValue) * 0.01851852);
		return result;
	}
	else if (output == "Cycles") {
		result = std::to_string(std::stod(inputValue) * 0.0000462963);
		return result;
	}
	else if (output == "Revolution") {
		result = std::to_string(std::stod(inputValue) * 0.00004629619);
		return result;
	}
	else if (output == "Arcsecond") {
		result = std::to_string(std::stod(inputValue) * 60);
		return result;
	}
	else if (output == "Arcminute") {
		result = std::to_string(std::stod(inputValue) * 1);
		return result;
	}
	return inputValue;
}