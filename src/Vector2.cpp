#include "Vector2.h"
#include <cmath>

namespace Collisions {

    Vector2::Vector2(double x, double y) : x(x), y(y) {}

    Vector2 Vector2::operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 Vector2::operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 Vector2::operator*(double scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    double Vector2::magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    double Vector2::distanceTo(const Vector2& other) const {
        return (*this - other).magnitude();
    }

} // namespace Collisions
