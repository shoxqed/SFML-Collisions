#ifndef COLLISIONS_BODY_H
#define COLLISIONS_BODY_H

#include "Vector2.h"
#include "AABB.h"

namespace Collisions {

    struct Body {
        Vector2 position;
        Vector2 velocity;
        double radius;
        double mass;

        Body(Vector2 pos, Vector2 vel, double r, double m);

        void update(double dt);

        // Get the AABB of the body (for collision detection)
        AABB getAABB() const;
    };

} // namespace Collisions

#endif // COLLISIONS_BODY_H
