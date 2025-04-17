#ifndef COLLISIONS_AABB_H
#define COLLISIONS_AABB_H

#include "Vector2.h"

namespace Collisions {

    struct AABB {
        Vector2 min;  // Minimum point (left-bottom corner)
        Vector2 max;  // Maximum point (top-right corner)

        // Constructor to initialize the AABB
        AABB(Vector2 min, Vector2 max);

        // Check if this AABB intersects with another
        bool intersects(const AABB& other) const;

        // Check if a point is inside this AABB
        bool contains(const Vector2& point) const;
    };

} // namespace Collisions

#endif // COLLISIONS_AABB_H
