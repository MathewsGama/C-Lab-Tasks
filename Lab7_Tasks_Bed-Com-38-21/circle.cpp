#include "Circle.h"

using namespace shapes;

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
