#pragma once
#include <string>
#include <deque>
#include "Token.h"

class ShuntingAlgorithm {
public:
	std::string ShuntingYard(std::string inputString);
	ShuntingAlgorithm();
	std::deque<Token> ShuntIt(const std::deque<Token>& tokens);
};

