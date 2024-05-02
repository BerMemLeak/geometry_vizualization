//
// Created by user on 01.05.2024.
//

#include "non_Closed_polygons_Class.h"
#include <stdexcept>

non_Closed_polygons_Class::non_Closed_polygons_Class( const sf::Color& col, const std::vector<sf::Vector2f>& vertices,std::string name )
        : FigureInterface(name, col, vertices.size()), m_vertices(vertices) {}

void non_Closed_polygons_Class::draw() {
    if (!is_possible_draw()) {
        throw std::invalid_argument("Нельзя создать фигуру с такими аргументами");
    }

    sf::RenderWindow window(sf::VideoMode(display_width, display_height), name);
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::VertexArray lines(sf::LinesStrip, m_vertices.size());
        for (size_t i = 0; i < m_vertices.size(); ++i) {
            lines[i].position = m_vertices[i];
            lines[i].color = color;
        }

        window.draw(lines);

        window.display();
    }
}

bool non_Closed_polygons_Class::is_possible_draw() {
    return m_vertices.size() >= 2;
}

