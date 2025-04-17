#ifndef COLLISIONS_OBJECT_H
#define COLLISIONS_OBJECT_H

namespace Collisions {

    class Object {
    public:
        virtual ~Object() = default;
        virtual void update(double dt) = 0;
    };

} // namespace Collisions

#endif // COLLISIONS_OBJECT_H
