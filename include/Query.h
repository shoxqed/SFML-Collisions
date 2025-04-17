#ifndef COLLISIONS_QUERY_H
#define COLLISIONS_QUERY_H

#include "Body.h"
#include <vector>

namespace Collisions {

    class Query {
    public:
        static std::vector<Body*> queryBodies(const std::vector<Body>& bodies, const AABB& area);
    };

} // namespace Collisions

#endif // COLLISIONS_QUERY_H
