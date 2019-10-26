#include <string>
#pragma once
namespace InputOutput {
	class Output
	{
	public:
		std::string resultOutput;

		System::String^ InputOutput(System::String^ input);

		System::String^ ClearOutput();

		System::String^ RunCalculation();
	};
}

