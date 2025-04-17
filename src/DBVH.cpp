#include "DBVH.h"
#include "TreeNode.h"

namespace Collisions {

    DBVH::DBVH() : root(nullptr) {}

    void DBVH::build(const std::vector<Body>& bodies) {
        std::vector<Body> bodiesCopy = bodies; // Copy bodies so we don't modify the input directly
        buildTree(bodiesCopy, 0, bodiesCopy.size());
    }

    void DBVH::buildTree(std::vector<Body>& bodies, int start, int end) {
        if (start >= end) return;

        int mid = (start + end) / 2;
        AABB boundingBox = bodies[mid].getAABB();

        for (int i = start; i <= end; ++i) {
            boundingBox.min = Vector2(std::min(boundingBox.min.x, bodies[i].getAABB().min.x),
                                      std::min(boundingBox.min.y, bodies[i].getAABB().min.y));
            boundingBox.max = Vector2(std::max(boundingBox.max.x, bodies[i].getAABB().max.x),
                                      std::max(boundingBox.max.y, bodies[i].getAABB().max.y));
        }

        TreeNode* node = new TreeNode(bodies[mid], boundingBox);
        if (root == nullptr) {
            root = node;
        }

        buildTree(bodies, start, mid - 1);
        buildTree(bodies, mid + 1, end);
    }

    bool DBVH::queryCollision(const Body& body) const {
        if (root == nullptr) return false;
        return checkCollision(root->boundingBox, body.getAABB());
    }

    bool DBVH::checkCollision(const AABB& aabb1, const AABB& aabb2) const {
        return !(aabb1.max.x < aabb2.min.x || aabb1.min.x > aabb2.max.x ||
                 aabb1.max.y < aabb2.min.y || aabb1.min.y > aabb2.max.y);
    }

    void DBVH::clear() {
        delete root;
        root = nullptr;
    }

} // namespace Collisions
