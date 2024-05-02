//
// Created by user on 28.04.2024.
//
#pragma once

#include <SFML/Graphics.hpp>
#include "../Triangle_Class/Triangle.h"

class IsoscelesTriangle: public Triangle{
public:
    IsoscelesTriangle(const sf::Color& col, double A_size, double B_size, double C_size,std::string name = "IsoscelesTriangle");

protected:
    bool is_possible_draw() override;
};



