#include "ShuntingAlgorithm.h"
#include <deque>
#include "Token.h"
#include <iostream>
#include <vector>

ShuntingAlgorithm::ShuntingAlgorithm() {

}

std::string ShuntingAlgorithm::ShuntingYard(std::string inputString) {
	Token tokenObject;
	std::deque<Token> tokens = tokenObject.convertToToken(inputString);
	std::deque<Token> queueStack = ShuntIt(tokens);
	std::vector<int> calculateStack;

	while (!queueStack.empty())
	{
		Token token = queueStack.front();
		queueStack.pop_front();
		if (token.type == Token::Type::numberType) {
			calculateStack.push_back(std::stoi(token.inputString));
		}
		else if (token.type == Token::Type::operatorType) {
			int rightHandNumber = calculateStack.back();
			calculateStack.pop_back();
			int leftHandNumber = calculateStack.back();
			calculateStack.pop_back();

			switch (token.inputString[0])
			{
			default:
				exit(0);
				break;
			case '+':
				calculateStack.push_back(leftHandNumber + rightHandNumber);
				break;
			case '-':
				calculateStack.push_back(leftHandNumber * rightHandNumber);
				break;
			case '/':
				calculateStack.push_back(leftHandNumber / rightHandNumber);
				break;
			case '*':
				calculateStack.push_back(leftHandNumber * rightHandNumber);
				break;
			}

		}
	}
	int result = calculateStack.back();
	std::string stringResult = std::to_string(result);
	return stringResult;
}


std::deque<Token> ShuntingAlgorithm::ShuntIt(const std::deque<Token>& tokens)
{
	std::deque<Token> queueStack;
	std::vector<Token> stack;

	for each(Token token in tokens) {
		switch (token.type)
		{
		default:
			exit(0);
			break;
		case Token::Type::numberType:
			queueStack.push_back(token);
			break;
		case Token::Type::operatorType:
		{
			Token firstOperator = token; 

			while (!stack.empty())
			{
				Token secondOperator = stack.back();
				if (firstOperator.precedence <= secondOperator.precedence) {
					stack.pop_back();
					queueStack.push_back(secondOperator);
					continue;
				}

				break;
			}
			stack.push_back(firstOperator);
		}

			break;
		case Token::Type::leftParentheses:
			stack.push_back(token);

			break;
		case Token::Type::rightParentheses:
		{
			bool matchedParentheses;
			while (!stack.empty())
			{
				Token topOfStack = stack.back();
				if (topOfStack.type != Token::Type::leftParentheses) {
					stack.pop_back();
					queueStack.push_back(topOfStack);
				}

				stack.pop_back();
				matchedParentheses = true;
			}
		}
			break;
		}
	}

	while (!stack.empty())
	{
		queueStack.push_back(stack.back());
		stack.pop_back();
	}

	return queueStack;
}
