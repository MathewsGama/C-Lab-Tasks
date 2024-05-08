#ifndef SHAPES_H
#define SHAPES_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        // Constructors
        Square(); // Default constructor
        Square(float side); // Overloaded constructor

        // Destructor
        ~Square();

        // Accessor methods
        void setSideLength(float side);
        float getSideLength() const;
    };

    class Triangle {
    private:
        float base;
        float height;

    public:
        // Constructors
        Triangle(); // Default constructor
        Triangle(float b, float h); // Overloaded constructor

        // Destructor
        ~Triangle();

        // Accessor methods
        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };

    class Circle {
    private:
        float radius;

    public:
        // Constructors
        Circle(); // Default constructor
        Circle(float r); // Overloaded constructor

        // Destructor
        ~Circle();

        // Accessor methods
        void setRadius(float r);
        float getRadius() const;
    };

    class Area {
    public:
        // Static member functions
        static float calculateArea(const Square& square);
        static float calculateArea(const Triangle& triangle);
        static float calculateArea(const Circle& circle);
    };
}

#endif
