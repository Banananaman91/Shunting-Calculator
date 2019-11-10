#include "Output.h"
#include "ShuntingAlgorithm.h"
#include <windows.h>
using namespace InputOutput;
using namespace ShuntingAlgorithmCalculator;

System::String^ Output::InputOutput(System::String^ input) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(input)).ToPointer();
	std::string inputString = std::string(chars);
	if (!resultOutput.empty() && !isdigit(inputString.back())) {
		if (!isdigit(resultOutput.back()) && inputString.back() != '(' && resultOutput.back() != ')') {
			System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
			return systemOutput;
		}
	}

	if (!resultOutput.empty() && isdigit(resultOutput.back())) {
		if (inputString.back() == '(') {
			System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
			return systemOutput;
		}
	}

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

System::String^ InputOutput::Output::PreviousCalculation()
{
	previousEquation = resultOutput + "\n";
	if (previousEquation == "2+2-1\n") {
		PlaySound(TEXT("QuickMath.wav"), NULL, SND_SYNC);
	}
	System::String^ systemOutput = gcnew System::String(previousEquation.c_str());
	return systemOutput;
}
