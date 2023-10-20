#include <iostream>

class Triangle {
public:
    double base;
    double height;

    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() {
        return 0.5 * base * height;
    }
};

int main() {
    double base, height;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    Triangle triangle(base, height);

    double area = triangle.calculateArea();
    std::cout << "Area of the triangle is: " << area << std::endl;

    return 0;
}