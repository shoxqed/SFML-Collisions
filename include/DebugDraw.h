#ifndef COLLISIONS_DEBUG_DRAW_H 
#define COLLISIONS_DEBUG_DRAW_H

#include <SFML/Graphics.hpp>

namespace Collisions {

    class DebugDraw {
    public:
        DebugDraw(sf::RenderWindow& window);

        void drawCircle(float x, float y, float radius);
        void drawLine(float x1, float y1, float x2, float y2);

    private:
        sf::RenderWindow& window;
    };

} // namespace Collisions




#endif /*COLLISIONS_DEBUG_DRAW_H*/