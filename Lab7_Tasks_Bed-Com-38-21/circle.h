#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
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
}

#endif
