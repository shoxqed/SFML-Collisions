#ifndef COLLISIONS_COLLISION_HANDLER_H
#define COLLISIONS_COLLISION_HANDLER_H

#include <vector>
#include "Body.h"
#include "CollisionPair.h"
#include "Quadtree.h"

namespace Collisions {

    class CollisionHandler {
    public:
        void handleCollisions(std::vector<Body>& bodies, const AABB& worldBounds);
        void resolveCollision(CollisionPair& pair);
        bool checkCollision(const Body& a, const Body& b);

    private:
        void handlePair(CollisionPair& pair);
    };

} // namespace Collisions

#endif // COLLISIONS_COLLISION_HANDLER_H
