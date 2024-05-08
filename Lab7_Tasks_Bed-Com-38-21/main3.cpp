#include <iostream>
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"
#include "shapes/Area.h"

using namespace std;
using namespace shapes;

void calculateSquareArea() {
    float side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    Square square(side);
    cout << "Area of square: " << Area::calculateArea(square) << endl;
}

void calculateTriangleArea() {
    float base, height;
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    Triangle triangle(base, height);
    cout << "Area of triangle: " << Area::calculateArea(triangle) << endl;
}

void calculateCircleArea() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area of circle: " << Area::calculateArea(circle) << endl;
}

int main() {
    int choice;
    do {
        cout << "\nSelect an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSquareArea();
                break;
            case 2:
                calculateTriangleArea();
                break;
            case 3:
                calculateCircleArea();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
