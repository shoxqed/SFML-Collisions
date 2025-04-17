#include "Body.h"

namespace Collisions {

    Body::Body(Vector2 pos, Vector2 vel, double r, double m)
        : position(pos), velocity(vel), radius(r), mass(m) {}

    void Body::update(double dt) {
        position = position + velocity * dt;
    }

    AABB Body::getAABB() const {
        return AABB(Vector2(position.x - radius, position.y - radius),
                    Vector2(position.x + radius, position.y + radius));
    }

} // namespace Collisions
