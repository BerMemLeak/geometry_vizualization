//
// Created by user on 28.04.2024.
//
#include "RectangularTriangle.h"
#include <cmath>

RectangularTriangle::RectangularTriangle(const sf::Color& col, double A_size, double B_size, double C_size, std::string name)
        : Triangle(col, A_size, B_size, C_size, std::move(name)) {}

bool RectangularTriangle::is_possible_draw() {
    bool condition1 = (A_size + B_size > C_size);
    bool condition2 = (A_size + C_size > B_size);
    bool condition3 = (B_size + C_size > A_size);
    bool condition4 = (c_degree + a_degree + b_degree) * 180.0 / M_PI == 180;
    bool condition5 = ((c_degree * 180.0 / M_PI) == 90) || ((b_degree * 180.0 / M_PI) == 90) || ((a_degree * 180.0 / M_PI) == 90);
    return (condition1 && condition2 && condition3 && condition4 && condition5);
}
