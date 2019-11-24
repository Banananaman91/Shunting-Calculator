#include <string>
#pragma once
namespace InputOutput {
	class ProcessOutput
	{
	public:
		std::string resultOutput;
		std::string equationInput;
		std::string previousEquation;
		std::string InputOutput(std::string input);
		std::string ClearOutput();
		std::string RunCalculation();
	};
}

