#include "Token.h"

Token::Token() {

}

std::deque<Token> Token::convertToToken(std::string& inputString)
{
	std::deque<Token> tokens;
	std::string number;

	for (const char* i = inputString.c_str(); *i; i++)
	{
		if (isdigit(*i)) {
			number += *i;
		}
		else {
			tokens.push_back(Token::Token(Token::Type::numberType, number));
			number = "";

			tokens.push_back(operatorToken(*i));
		}
	}
	if (number != "") {
		tokens.push_back(Token::Token(Token::Type::numberType, number));
	}

	return tokens;
}

Token Token::operatorToken(char outputChar){
	switch (outputChar)
	{
	default:
		exit(0);
		break;
	case '+':
		return Token::Token(Token::Type::operatorType, "+", 1);
	case '-':
		return Token::Token(Token::Type::operatorType, "-", 1);
	case '/':
		return Token::Token(Token::Type::operatorType, "/", 2);
	case '*':
		return Token::Token(Token::Type::operatorType, "*", 2);
	case '(':
		return Token::Token(Token::Type::leftParentheses, "(");
	case ')':
		return Token::Token(Token::Type::rightParentheses, ")");
	}
}