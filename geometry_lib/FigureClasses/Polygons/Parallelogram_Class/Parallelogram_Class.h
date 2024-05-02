//
// Created by user on 01.05.2024.
//

#pragma once

#include <SFML/Graphics.hpp>
#include "../Quadrilateral_Class/Quadrilateral_Class.h"

class Parallelogram_Class : public Quadrilateral_Class {
public:
    Parallelogram_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1, const sf::Vector2f& p2, float height);

};

