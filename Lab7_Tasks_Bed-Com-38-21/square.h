#ifndef SQUARE_H
#define SQUARE_H

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
}

#endif
