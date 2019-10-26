#include "Token.h"
using namespace Tokens;

Token::Token() {

}

std::deque<Token> Token::ConvertToToken(std::string& inputString)
{
	std::deque<Token> tokens;
	std::string number;

	for (const char* i = inputString.c_str(); *i; i++)
	{
		if (isdigit(*i) || *i == '.') {
			number += *i;
		}
		else {
			
			if(number != "") tokens.push_back(Token::Token(Token::Type::numberType, number));
			number = "";

			tokens.push_back(OperatorToken(*i));
		}
	}
	if (number != "") {
		tokens.push_back(Token::Token(Token::Type::numberType, number));
	}

	return tokens;
}

Token Token::OperatorToken(char outputChar){
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