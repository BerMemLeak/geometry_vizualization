//
// Created by user on 01.05.2024.
//
#include "Rhombus_Class.h"
#include <stdexcept>
#include <cmath>

Rhombus_Class::Rhombus_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1,
                             const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4)
        : Quadrilateral_Class(std::move(name), col, p1, p2, p3, p4) {
    if (!is_possible_draw()) {
        throw std::invalid_argument("The provided points do not form a rhombus.");
    }
}

bool Rhombus_Class::is_possible_draw() {
    float side1_length = std::sqrt(std::pow(this->m_p2.x - this->m_p1.x, 2) + std::pow(this->m_p2.y - this->m_p1.y, 2));
    float side2_length = std::sqrt(std::pow(this->m_p3.x - this->m_p2.x, 2) + std::pow(this->m_p3.y - this->m_p2.y, 2));
    float side3_length = std::sqrt(std::pow(this->m_p4.x - this->m_p3.x, 2) + std::pow(this->m_p4.y - this->m_p3.y, 2));
    float side4_length = std::sqrt(std::pow(this->m_p1.x - this->m_p4.x, 2) + std::pow(this->m_p1.y - this->m_p4.y, 2));

    return (std::abs(side1_length - side2_length) < 1e-5) &&
           (std::abs(side2_length - side3_length) < 1e-5) &&
           (std::abs(side3_length - side4_length) < 1e-5);
}
