#include <iostream>
#include <cmath> 

class Circle {
private:
    double radius;

public:
    
    Circle(double r) {
        radius = r;
    }
    double calculateArea() {
        return M_PI * radius * radius;
    }

    
    double calculateCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    double userRadius;

    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    
    Circle myCircle(userRadius);

    
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}