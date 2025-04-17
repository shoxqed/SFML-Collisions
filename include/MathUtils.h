#ifndef COLLISIONS_MATHUTILS_H
#define COLLISIONS_MATHUTILS_H

namespace Collisions {

    class MathUtils {
    public:
        // Static method to compute the dot product of two vectors
        static double dotProduct(const Vector2& a, const Vector2& b);

        // Static method to compute the cross product of two vectors
        static double crossProduct(const Vector2& a, const Vector2& b);

        // Static method to compute the magnitude of a vector
        static double magnitude(const Vector2& v);
    };

} // namespace Collisions

#endif // COLLISIONS_MATHUTILS_H
