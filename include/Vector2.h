#ifndef COLLISIONS_VECTOR2_H
#define COLLISIONS_VECTOR2_H

namespace Collisions {

    struct Vector2 {
        double x, y;

        // Constructor to initialize vector
        Vector2(double x = 0.0, double y = 0.0);

        // Vector addition
        Vector2 operator+(const Vector2& other) const;

        // Vector subtraction
        Vector2 operator-(const Vector2& other) const;

        // Scalar multiplication
        Vector2 operator*(double scalar) const;

        // Magnitude of the vector
        double magnitude() const;

        // Distance between two vectors
        double distanceTo(const Vector2& other) const;
    };

} // namespace Collisions

#endif // COLLISIONS_VECTOR2_H
