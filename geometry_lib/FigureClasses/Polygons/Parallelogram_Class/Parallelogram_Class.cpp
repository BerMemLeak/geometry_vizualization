//
// Created by user on 01.05.2024.
//

#include "Parallelogram_Class.h"

Parallelogram_Class::Parallelogram_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1, const sf::Vector2f& p2, float height)
        : Quadrilateral_Class(name, col, p1, p2, p2 + sf::Vector2f(p2.x - p1.x, height), p1 + sf::Vector2f(p2.x - p1.x, height)) {}

