//
// Created by user on 01.05.2024.
//
#include "Square_Class.h"
#include <stdexcept>

Square_Class::Square_Class(const sf::Color& col, const sf::Vector2f& p1,
                           const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4,
                           std::string name)
        : Quadrilateral_Class(std::move(name), col, p1, p2, p3, p4) {
    if (!is_possible_draw()) {
        throw std::invalid_argument("Нельзя создать фигуру с такими аргументами");
    }
}

bool Square_Class::is_possible_draw() {
    float side1_length = std::abs(this->m_p2.x - this->m_p1.x);
    float side2_length = std::abs(this->m_p3.y - this->m_p2.y);
    float side3_length = std::abs(this->m_p4.x - this->m_p3.x);
    float side4_length = std::abs(this->m_p1.y - this->m_p4.y);

    return (std::abs(side1_length - side2_length) < 1e-5) &&
           (std::abs(side2_length - side3_length) < 1e-5) &&
           (std::abs(side3_length - side4_length) < 1e-5);
}
