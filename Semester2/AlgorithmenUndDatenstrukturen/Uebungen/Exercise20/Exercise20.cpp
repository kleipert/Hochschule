#include "iostream"
#include "Stack.h"
#include "cctype"

#include <string>


bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

std::string infixToPostfix(const std::string& infix) {
    Stack<char> operatorStack;
    std::string postfix;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfix += operatorStack.pop();
            }
            if (!operatorStack.empty() && operatorStack.top() == '(') {
                operatorStack.pop();
            }
        } else if (isOperator(c)) {
            while (!operatorStack.empty() && precedence(operatorStack.top()) >= precedence(c)) {
                postfix += operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        postfix += operatorStack.pop();
    }

    return postfix;
}

int evaluatePostfix(const std::string& postfix) {
    Stack<int> operandStack;

    for (char c : postfix) {
        if (std::isdigit(c)) {
            int result = c - '0';
            operandStack.push(result); // Convert char digit to integer
        } else if (isOperator(c)) {
            int operand2 = operandStack.pop();
            int operand1 = operandStack.pop();
            int result = 0;
            switch(c) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }
            operandStack.push(result);
        }
    }

    return operandStack.pop();
}


int main()
{
    // Exercise 20
    Stack<int> stack;
    for (int i = 1; i <= 3; ++i)
    {
        stack.push(i);
    }

    // Exercise 21
    std::cout << "Top element: " << stack.top() << std::endl;
    std::cout << "Popped element: " << stack.pop() << std::endl;
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    std::string infixExpression = "1+2*3-(4/5+6*7)";
    std::string postfixExpression = infixToPostfix(infixExpression);
    std::cout << "Infix Expression: " << infixExpression << std::endl;
    std::cout << "Postfix Expression: " << postfixExpression << std::endl;

    // Exercise 22
    int result = evaluatePostfix(postfixExpression);
    std::cout << "Result of postfix expression " << postfixExpression << " is: " << result << std::endl;

    // Exercise 23

    return 0;
}
