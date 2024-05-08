#include "Square.h"

using namespace shapes;

// Square class implementation
Square::Square() {
    sideLength = 0.0;
}

Square::Square(float side) {
    sideLength = side;
}

Square::~Square() {}

void Square::setSideLength(float side) {
    sideLength = side;
}

float Square::getSideLength() const {
    return sideLength;
}
