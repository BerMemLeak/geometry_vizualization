//
// Created by user on 01.05.2024.
//
#include "Quadrilateral_Class.h"

Quadrilateral_Class::Quadrilateral_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1, const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4)
        : FigureInterface(name, col, 4), m_p1(p1), m_p2(p2), m_p3(p3), m_p4(p4) {}

void Quadrilateral_Class::draw() {
    if (!is_possible_draw()) return;

    sf::RenderWindow window(sf::VideoMode(display_width, display_height), name);
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::VertexArray lines(sf::LinesStrip, 5);
        lines[0].position = m_p1;
        lines[1].position = m_p2;
        lines[2].position = m_p3;
        lines[3].position = m_p4;
        lines[4].position = m_p1; // Замыкаем фигуру, соединив последнюю вершину с первой
        lines[0].color = lines[1].color = lines[2].color = lines[3].color = lines[4].color = color;

        window.draw(lines);

        window.display();
    }
}

bool Quadrilateral_Class::is_possible_draw() {
    return true; // Четырехугольник всегда можно нарисовать
}

