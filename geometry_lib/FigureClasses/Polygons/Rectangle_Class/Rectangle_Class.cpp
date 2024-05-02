//
// Created by user on 01.05.2024.
//
#include "Rectangle_Class.h"
#include <stdexcept>

Rectangle_Class::Rectangle_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1, const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4)
        : Quadrilateral_Class(std::move(name), col, p1, p2, p3, p4) {
    if (!is_possible_draw()) {
        throw std::invalid_argument("The provided points do not form a rectangle.");
    }
}

bool Rectangle_Class::is_possible_draw() {
    sf::Vector2f side1 = this->m_p2 - this->m_p1;
    sf::Vector2f side2 = this->m_p4 - this->m_p1;
    sf::Vector2f side3 = this->m_p3 - this->m_p2;
    sf::Vector2f side4 = this->m_p3 - this->m_p4;
    return (std::abs(side1.x * side3.x + side1.y * side3.y) < 1e-5) && (std::abs(side2.x * side4.x + side2.y * side4.y) < 1e-5);
}
// противопольжные стороны равны => скалярное произведение примерно = 0,
// 1e-5 - константа для обработки чисел с плав точкой

