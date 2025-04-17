#include "TreeNode.h"

namespace Collisions {

    TreeNode::TreeNode(const Body& b, const AABB& bb)
        : body(b), boundingBox(bb), left(nullptr), right(nullptr) {}

    TreeNode::~TreeNode() {
        delete left;
        delete right;
    }

} // namespace Collisions
