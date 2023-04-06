

#include <iostream>
#include <cmath>

using namespace std;

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        cout << "Error! Cannot divide by zero";
        exit(0);
    }
    return num1 / num2;
}

float squareRoot(float num) {
    if (num < 0) {
        cout << "Error! Cannot take square root of a negative number";
        exit(0);
    }
    return sqrt(num);
}

int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /, s,^)";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        result = add(num1, num2);
        break;

    case '-':
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        result = subtract(num1, num2);
        break;

    case '*':
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        result = multiply(num1, num2);
        break;

    case '/':
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        result = divide(num1, num2);
        break;

    case 's':
        cout << "Enter operand: ";
        cin >> num1;
        result = squareRoot(num1);
        break;
    case '^':
        cout << "Enter operands:";
        cin >> num1 >> num2;
        result = pow(num1, num2);
        break;

    default:
        cout << "Error! Operator is not correct";
        exit(0);
        break;
    }

    cout << "Result: " << result;

    return 0;
}
