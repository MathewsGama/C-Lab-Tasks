#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Create an instance of Rectangle using default constructor
    Rectangle rectangle1;

    // Prompt user to input length and width for rectangle1
    float length1, width1;
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Set the length and width of rectangle1 using accessor methods
    rectangle1.setLength(length1);
    rectangle1.setWidth(width1);

    // Calculate and output the area of rectangle1
    cout << "Area of the first rectangle: " << rectangle1.calculateArea() << endl;

    // Create another instance of Rectangle using overloaded constructor
    float length2, width2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    Rectangle rectangle(length2, width2);

    // Output the area of rectangle2
    cout << "Area of the second rectangle: " << rectangle2.calculateArea() << endl;

    return 0;
}
