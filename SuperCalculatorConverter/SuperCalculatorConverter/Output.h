#include <string>
#pragma once
namespace InputOutput {
	class Output
	{
	public:
		std::string resultOutput;
		std::string previousEquation;
		std::string InputOutput(std::string input);
		std::string ClearOutput();
		std::string RunCalculation();
		std::string PreviousCalculation();
	};
}

