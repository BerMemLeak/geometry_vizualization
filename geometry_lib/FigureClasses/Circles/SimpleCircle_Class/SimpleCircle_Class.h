//
// Created by user on 01.05.2024.
//
#pragma once
#include "../Interface_Class/FigureInterface.h"
#include <SFML/Graphics.hpp>


class Circle : public FigureInterface {
public:
    Circle(std::string name, const sf::Color& col, int radius,
           int dispWidth = 800, int dispHeight = 600)
            : FigureInterface(name, col, 0, dispWidth, dispHeight), radius(radius) {}

    void draw() override {
        if (!is_possible_draw()) {
            throw std::invalid_argument("Нельзя построить с такими аргументами");
        }
            sf::RenderWindow window(sf::VideoMode(display_width, display_height), "Circle");
            window.clear();

            sf::CircleShape circle(radius);
            circle.setFillColor(color);
            circle.setPosition(display_width / 2 - radius, display_height / 2 - radius);

            window.draw(circle);
            window.display();

            while (window.isOpen()) {
                sf::Event event;
                while (window.pollEvent(event)) {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
            }
    }

protected:
    bool is_possible_draw() override {
        return (radius > 0);
    }

private:
    int radius;
};
