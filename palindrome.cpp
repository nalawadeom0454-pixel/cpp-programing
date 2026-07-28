#include <iostream>

int main() {
    int a, originalNum, reversedNum = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> a;

    
    originalNum = a;

   
    while (a > 0) {
        remainder = a % 10;
        reversedNum = reversedNum * 10 + remainder;
        a = a/10;
    }

    
    if (originalNum == reversedNum)
     {
     std::cout << originalNum << " is a palindrome number." << std::endl;
    } else {
     std::cout << originalNum << " is not a palindrome number." << std::endl;
    }

    return 0;
}
