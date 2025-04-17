#include "DebugDraw.h"
#include <SFML/Graphics.hpp>

namespace Collisions {

    // Constructor
    DebugDraw::DebugDraw(sf::RenderWindow& window) : window(window) {}

    // Draw circle
    void DebugDraw::drawCircle(float x, float y, float radius) {
        sf::CircleShape shape(radius);
        shape.setPosition(x - radius, y - radius);
        shape.setFillColor(sf::Color::Green);
        window.draw(shape);
    }

    // Draw line
    void DebugDraw::drawLine(float x1, float y1, float x2, float y2) {
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(x1, y1)),
            sf::Vertex(sf::Vector2f(x2, y2))
        };
        window.draw(line, 2, sf::Lines);
    }

} // namespace Collisions