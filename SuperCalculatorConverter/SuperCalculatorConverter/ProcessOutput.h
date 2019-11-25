#include <string>
#pragma once
namespace InputOutput {
	class ProcessOutput
	{
	public:
		std::string resultOutput;
		std::string equationInput;
		std::string previousEquation;
		std::string conversionResult;
		std::string InputOutput(std::string input);
		std::string ClearOutput();
		std::string RunCalculation();
		std::string ConvertLength(std::string input, std::string output, std::string inputValue);
		enum LengthConversions {
			Metre,
			Centimetre,
			Kilometre,
			Millimetre
		};
	};
}

