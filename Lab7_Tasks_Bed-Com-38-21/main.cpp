#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle rectangle;

    // Prompt user to input length and width
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Set the length and width using accessor methods
    rectangle.setLength(length);
    rectangle.setWidth(width);

    // Calculate and output the area
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
