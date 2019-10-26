#include "Output.h"
#include "ShuntingAlgorithm.h"
    
System::String^ Output::output(System::String^ input) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(input)).ToPointer();
	std::string inputString = std::string(chars);
	resultOutput += inputString;
	System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
	return (systemOutput);
}

System::Void Output::clearOutput() {
	resultOutput = "";
}

System::String^ Output::runCalculation() {
	ShuntingAlgorithm shuntingAlgorithm;
	resultOutput = shuntingAlgorithm.ShuntingYard(resultOutput);
	System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
	return (systemOutput);
}