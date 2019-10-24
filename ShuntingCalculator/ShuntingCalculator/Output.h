#include <list>
#include <string>
#include "C:/Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.7.2/mscorlib.dll"
#pragma once
class Output
{
public:
	std::string resultOutput;
	Output();
	//Generic::List <int> numbers;
	System::String^ output(System::String^ input) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(input)).ToPointer();
		std::string inputString = ConvertToString(chars, sizeof(chars) / sizeof (char));
		resultOutput += inputString;
		System::String^ systemOutput = gcnew System::String(resultOutput.c_str());
		return (systemOutput);
	};

	System::Void clearOutput() {
		resultOutput = "";
	}

	std::string ConvertToString(const char* chars, int size) {
		std::string s;
		for (int i = 0; i < size; i++) {
			s += chars[i];
		}
		return s;
	}
};

