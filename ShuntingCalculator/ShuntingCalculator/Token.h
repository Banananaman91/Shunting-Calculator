#pragma once
#include <string>
#include <deque>
namespace Tokens {
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

		Token OperatorToken(char operatorChar);
		std::deque <Token> ConvertToToken(std::string& inputString);
	};
}

