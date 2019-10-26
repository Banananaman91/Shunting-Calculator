#pragma once
#include <string>
#include <deque>
class Token
{
public:
	enum Type {
		unknownType = 0,
		numberType,
		operatorType,
		leftParentheses,
		rightParentheses

	};
	Token();
	Type type;
	std::string inputString;
	int precedence;

	Token(Type tokenType, const std::string strings, int precedence = -1) : type{ tokenType }, inputString{ strings }, precedence{ precedence }{};

	Token operatorToken(char operatorChar);
	std::deque <Token> convertToToken(std::string& inputString);
};

