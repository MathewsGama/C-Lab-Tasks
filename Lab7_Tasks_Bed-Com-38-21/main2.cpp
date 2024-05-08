#include <iostream>
#include "shapes.h"

using namespace std;
using namespace shapes;

int main() {
    // Create instances of shapes
    Square square(5.0);
    Triangle triangle(3.0, 4.0);
    Circle circle(2.5);

    // Calculate and output areas
    cout << "Area of square: " << Area::calculateArea(square) << endl;
    cout << "Area of triangle: " << Area::calculateArea(triangle) << endl;
    cout << "Area of circle: " << Area::calculateArea(circle) << endl;

    return 0;
}
