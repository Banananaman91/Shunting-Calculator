#include <string>
#pragma once
class Output
{
public:
	std::string resultOutput;

	System::String^ output(System::String^ input);

	System::Void clearOutput();

	void runCalculation();
};

