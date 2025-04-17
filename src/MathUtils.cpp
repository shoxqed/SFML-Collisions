#include "MathUtils.h"
#include "Vector2.h"

namespace Collisions {

    double MathUtils::dotProduct(const Vector2& a, const Vector2& b) {
        return a.x * b.x + a.y * b.y;
    }

    double MathUtils::crossProduct(const Vector2& a, const Vector2& b) {
        return a.x * b.y - a.y * b.x;
    }

    double MathUtils::magnitude(const Vector2& v) {
        return v.magnitude();
    }

} // namespace Collisions
