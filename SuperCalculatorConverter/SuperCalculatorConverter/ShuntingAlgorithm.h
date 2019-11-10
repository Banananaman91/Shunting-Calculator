#pragma once
#include <string>
#include <deque>
#include "Token.h"
using namespace Tokens;

namespace ShuntingAlgorithmCalculator {
	class ShuntingAlgorithm {
	public:
		std::string ShuntingYardAlgorithm(std::string inputString);
		ShuntingAlgorithm();
		std::deque<Token> ShuntIt(const std::deque<Token>& tokens);
	};
}

