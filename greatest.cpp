#include <iostream>
using namespace std;


class NumberFinder {
private:
    
    int num1;
    int num2;

public:
    
    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    
    void displayGreatest() {
        if (num1 > num2) {
            cout << "The greatest number is: " << num1 << endl;
        } 
        else if (num2 > num1) {
            cout << "The greatest number is: " << num2 << endl;
        } 
        else {
            cout << "Both numbers are equal: " << num1 << endl;
        }
    }
};


int main() {
    
    NumberFinder obj;

    
    obj.inputNumbers();
    obj.displayGreatest();

    return 0;
}