#include "CollisionHandler.h"
#include "Body.h"

namespace Collisions {

    bool CollisionHandler::checkCollision(const Body& a, const Body& b) {
        return a.position.distanceTo(b.position) < (a.radius + b.radius);
    }

    void CollisionHandler::resolveCollision(CollisionPair& pair) {
        Body& bodyA = *pair.bodyA;
        Body& bodyB = *pair.bodyB;

        Vector2 normal = bodyB.position - bodyA.position;
        double dist = normal.magnitude();
        if (dist == 0.0) return;
        normal = normal * (1.0 / dist);

        Vector2 relativeVelocity = bodyB.velocity - bodyA.velocity;
        double velAlongNormal = relativeVelocity.x * normal.x + relativeVelocity.y * normal.y;
        if (velAlongNormal > 0) return;

        double e = 1.0; // coefficient of restitution
        double j = -(1 + e) * velAlongNormal;
        j /= (1 / bodyA.mass + 1 / bodyB.mass);

        Vector2 impulse = normal * j;
        bodyA.velocity = bodyA.velocity - impulse * (1 / bodyA.mass);
        bodyB.velocity = bodyB.velocity + impulse * (1 / bodyB.mass);
    }

    void CollisionHandler::handleCollisions(std::vector<Body>& bodies, const AABB& worldBounds) {
        for (size_t i = 0; i < bodies.size(); ++i) {
            for (size_t j = i + 1; j < bodies.size(); ++j) {
                if (checkCollision(bodies[i], bodies[j])) {
                    CollisionPair pair(&bodies[i], &bodies[j]);
                    resolveCollision(pair);
                }
            }
        }
    }

} // namespace Collisions
