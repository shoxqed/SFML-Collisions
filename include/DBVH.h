#ifndef COLLISIONS_DBVH_H
#define COLLISIONS_DBVH_H

#include "AABB.h"
#include "Body.h"
#include "TreeNode.h"
#include <vector>

namespace Collisions {

    class DBVH {
    public:
        DBVH();
        void build(const std::vector<Body>& bodies);
        bool queryCollision(const Body& body) const;
        void clear();

    private:
        TreeNode* root;
        void buildTree(std::vector<Body>& bodies, int start, int end);
        bool checkCollision(const AABB& aabb1, const AABB& aabb2) const;
    };

} // namespace Collisions

#endif // COLLISIONS_DBVH_H
