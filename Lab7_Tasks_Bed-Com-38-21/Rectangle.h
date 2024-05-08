#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Destructor
    ~Rectangle();

    // Accessor methods for assigning values to length and width
    void setLength(float l);
    void setWidth(float w);

    // Accessor methods for retrieving values of length and width
    float getLength() const;
    float getWidth() const;

    // Member function to calculate and return the area of rectangle
    float calculateArea() const;
};

#endif
