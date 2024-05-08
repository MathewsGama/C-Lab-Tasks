#include "Area.h"
#include <cmath>

using namespace shapes;

// Area class implementation
float Area::calculateArea(const Square& square) {
    return square.getSideLength() * square.getSideLength();
}

float Area::calculateArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

float Area::calculateArea(const Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}
