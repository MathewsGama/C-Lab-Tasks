#include "shapes.h"
#include <cmath>

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

// Triangle class implementation
Triangle::Triangle() {
    base = 0.0;
    height = 0.0;
}

Triangle::Triangle(float b, float h) {
    base = b;
    height = h;
}

Triangle::~Triangle() {}

void Triangle::setBase(float b) {
    base = b;
}

void Triangle::setHeight(float h) {
    height = h;
}

float Triangle::getBase() const {
    return base;
}

float Triangle::getHeight() const {
    return height;
}

// Circle class implementation
Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(float r) {
    radius = r;
}

Circle::~Circle() {}

void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getRadius() const {
    return radius;
}

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
