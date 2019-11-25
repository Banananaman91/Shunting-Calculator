#pragma once
#include <string>
namespace Conversions {
	class Converter {
	public:
		std::string result;
		std::string Metres(std::string output, std::string inputValue);
		std::string Centimetres(std::string output, std::string inputValue);
		std::string Kilometres(std::string output, std::string inputValue);
		std::string Millimetres(std::string output, std::string inputValue);
	};
}