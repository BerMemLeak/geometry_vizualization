//
// Created by user on 01.05.2024.
//

#pragma once
#include "../SimpleCircle_Class/SimpleCircle_Class.h"
#include <SFML/Graphics.hpp>


class Ellipse : public Circle {
public:
    Ellipse(std::string name, const sf::Color& col, int radiusX, int radiusY,
            int dispWidth = 800, int dispHeight = 600)
            : Circle(name, col, (radiusX + radiusY) / 2, dispWidth, dispHeight),
              radiusX(radiusX), radiusY(radiusY) {}

    void draw() override {
        if (!is_possible_draw()) {
            throw std::invalid_argument("Нельзя построить с такими аргументами");
        }
            sf::RenderWindow window(sf::VideoMode(display_width, display_height), "Ellipse");
            window.clear();

            sf::CircleShape ellipse(radiusX);
            ellipse.setScale(radiusX / static_cast<float>(radiusY), 1.f);
            ellipse.setFillColor(color);
            ellipse.setPosition(display_width / 2 - radiusX, display_height / 2 - radiusY);

            window.draw(ellipse);
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
        return (radiusX > 0 && radiusY > 0);
    }

private:
    int radiusX;
    int radiusY;
};
