#include <SFML/Graphics.hpp>
#include "DebugDraw.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Collisions Debug Draw");

    Collisions::DebugDraw debugDraw(window);

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        // Draw some objects
        debugDraw.drawCircle(400, 300, 50);
        debugDraw.drawLine(100, 100, 700, 500);

        window.display();
    }

    return 0;
}
