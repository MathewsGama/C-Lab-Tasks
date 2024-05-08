#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Destructor (for now it does nothing)
Rectangle::~Rectangle() {
    // Destructor implementation (if needed in future)
}

// Accessor methods for assigning values to length and width
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

// Accessor methods for retrieving values of length and width
float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Member function to calculate and return the area of rectangle
float Rectangle::calculateArea() const {
    return length * width;
}
