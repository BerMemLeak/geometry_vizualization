//
// Created by user on 01.05.2024.
//

#include "Closed_polygons_Class.h"
#include <stdexcept>

Closed_polygons_Class::Closed_polygons_Class(std::string name, const sf::Color& col, const std::vector<sf::Vector2f>& vertices)
        : FigureInterface(name, col, vertices.size()), m_vertices(vertices) {}

void Closed_polygons_Class::draw() {
    if (!is_possible_draw()) {
        throw std::invalid_argument("Нельзя создать фигуру с такими аргументами");
    }

    sf::RenderWindow window(sf::VideoMode(display_width, display_height), name);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::ConvexShape polygon;
        polygon.setPointCount(vertex_count);
        polygon.setFillColor(color);
        for (size_t i = 0; i < m_vertices.size(); ++i)
            polygon.setPoint(i, m_vertices[i]);

        window.draw(polygon);

        window.display();
    }
}

bool Closed_polygons_Class::is_possible_draw() {
    return vertex_count >= 3 && m_vertices.size() == static_cast<size_t>(vertex_count);
}

