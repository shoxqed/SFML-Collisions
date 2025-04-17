#include "Query.h"

namespace Collisions {

    std::vector<Body*> Query::queryBodies(const std::vector<Body>& bodies, const AABB& area) {
        std::vector<Body*> result;
        for (auto& body : bodies) {
            if (area.contains(body.position)) {
                result.push_back(&body);
            }
        }
        return result;
    }

} // namespace Collisions
