#ifndef COLLISIONS_TREENODE_H
#define COLLISIONS_TREENODE_H

#include "AABB.h"
#include "Body.h"

namespace Collisions {

    struct TreeNode {
        Body body;
        AABB boundingBox;
        TreeNode* left;
        TreeNode* right;

        TreeNode(const Body& b, const AABB& bb);
        ~TreeNode();
    };

} // namespace Collisions

#endif // COLLISIONS_TREENODE_H
