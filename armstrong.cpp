#include <iostream>
using namespace std;

int main() {
    int a, originalNum, remainder, result = 0;

    cout << "Enter an integer: ";
    cin >> a;

    originalNum = a;

    while (originalNum != 0) {
        remainder = originalNum  % 10;          
        result += remainder * remainder * remainder; 
        originalNum /= 10;                     
    }

    
    if (result == a) {
        cout << a << " is an Armstrong number." << endl;
    } else {
        cout << a << " is not an Armstrong number." << endl;
    }

    return 0;
}
