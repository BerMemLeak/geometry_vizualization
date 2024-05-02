#pragma once
#include <utility>
#include "../Triangle_Class/Triangle.h"

class RectangularTriangle: public Triangle {
public:
    RectangularTriangle(const sf::Color& col, double A_size, double B_size, double C_size, std::string name = "Rectangular Triangle");

private:
    bool is_possible_draw() override;
};



