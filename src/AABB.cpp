#include "AABB.h"

namespace Collisions {

    AABB::AABB(Vector2 min, Vector2 max) : min(min), max(max) {}

    bool AABB::intersects(const AABB& other) const {
        return !(max.x < other.min.x || min.x > other.max.x ||
                 max.y < other.min.y || min.y > other.max.y);
    }

    bool AABB::contains(const Vector2& point) const {
        return (point.x >= min.x && point.x <= max.x &&
                point.y >= min.y && point.y <= max.y);
    }

} // namespace Collisions
