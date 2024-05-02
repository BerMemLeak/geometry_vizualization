#pragma once

#include <SFML/Graphics.hpp>
#include "../Triangle_Class/Triangle.h"

class EquilateralTriangle: public Triangle{
public:
    EquilateralTriangle(const sf::Color& col, double A_size, double B_size, double C_size, std::string name = "Equilateral Triangle");

private:
    bool is_possible_draw() override;
};
