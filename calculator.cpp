#include <iostream>

using namespace std;

class Calculator {
public:
    
    double add(double a, double b) {
        return a + b;
    }

    
    double subtract(double a, double b) {
        return a - b;
    }

    
    double multiply(double a, double b) {
        return a * b;
    }

    
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    
    int modulo(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero in modulo!" << endl;
            return 0;
        }
        return a % b;
    }
};

int main() {
    Calculator calc; 
    char op;
    double num1, num2;

    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Result: ";
    switch (op) {
        case '+':
            cout << calc.add(num1, num2);
            break;
        case '-':
            cout << calc.subtract(num1, num2);
            break;
        case '*':
            cout << calc.multiply(num1, num2);
            break;
        case '/':
            cout << calc.divide(num1, num2);
            break;
        case '%':
            
            cout << calc.modulo(static_cast<int>(num1), static_cast<int>(num2));
            break;
        default:
            cout << "Invalid Operator!";
            break;
    }
    cout << endl;

    return 0;
}