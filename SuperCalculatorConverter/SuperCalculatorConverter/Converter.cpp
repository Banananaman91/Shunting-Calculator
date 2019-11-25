#include "Converter.h"
using namespace Conversions;

std::string Conversions::Converter::Metres(std::string output, std::string inputValue)
{
	if (output == "Centimetre") {
		result = std::to_string(std::stoi(inputValue) * 100);
		return result;
	}
	else if (output == "Millimetre") {
		result = std::to_string(std::stoi(inputValue) * 1000);
		return result;
	}
	else if (output == "Kilometre") {
		result = std::to_string(std::stod(inputValue) / 1000);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Centimetres(std::string output, std::string inputValue)
{
	if (output == "Metre") {
		result = std::to_string(std::stod(inputValue) / 100);
		return result;
	}
	else if (output == "Millimetre") {
		result = std::to_string(std::stoi(inputValue) * 10);
		return result;
	}
	else if (output == "Kilometre") {
		result = std::to_string(std::stod(inputValue) / 100000);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Kilometres(std::string output, std::string inputValue)
{
	if (output == "Metre") {
		result = std::to_string(std::stoi(inputValue) * 1000);
		return result;
	}
	else if (output == "Millimetre") {
		result = std::to_string(std::stoi(inputValue) * 1000000);
		return result;
	}
	else if (output == "Centimetre") {
		result = std::to_string(std::stoi(inputValue) * 100000);
		return result;
	}
	return inputValue;
}

std::string Conversions::Converter::Millimetres(std::string output, std::string inputValue)
{
	if (output == "Metre") {
		result = std::to_string(std::stod(inputValue) / 1000);
		return result;
	}
	else if (output == "Centimetre") {
		result = std::to_string(std::stod(inputValue) / 10);
		return result;
	}
	else if (output == "Kilometre") {
		result = std::to_string(std::stod(inputValue) / 1000000);
		return result;
	}
	return inputValue;
}
