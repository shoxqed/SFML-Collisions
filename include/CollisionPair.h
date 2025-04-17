#ifndef COLLISIONS_COLLISION_PAIR_H
#define COLLISIONS_COLLISION_PAIR_H

#include "Body.h"

namespace Collisions {

    struct CollisionPair {
        Body* bodyA;
        Body* bodyB;

        CollisionPair(Body* a, Body* b);
    };

} // namespace Collisions

#endif // COLLISIONS_COLLISION_PAIR_H
