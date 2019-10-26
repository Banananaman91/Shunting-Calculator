#include "Output.h"
#include "ShuntingAlgorithm.h"
using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;
    
System::String^ Output::InputOutput(System::String^ input) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(input)).ToPointer();
	std::string inputString = std::string(chars);
	resultOutput += inputString;
	System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
	return systemOutput;
}

System::String^ Output::ClearOutput() {
	resultOutput = "";
	System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
	return systemOutput;
}

System::String^ Output::RunCalculation() {
	ShuntingAlgorithm shuntingAlgorithm;
	resultOutput = shuntingAlgorithm.ShuntingYardAlgorithm(resultOutput);
	System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
	return systemOutput;
}
