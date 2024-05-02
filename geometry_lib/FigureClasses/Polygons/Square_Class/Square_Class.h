#pragma once
#include <SFML/Graphics.hpp>
#include "../Quadrilateral_Class/Quadrilateral_Class.h"

class Square_Class : public Quadrilateral_Class {
public:
    Square_Class(const sf::Color& col, const sf::Vector2f& p1,
                 const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4,
                 std::string name = "Square");

private:
    bool is_possible_draw() override;
};








//#pragma once
//#include <SFML/Graphics.hpp>
//#include "../Quadrilateral_Class/Quadrilateral_Class.h"
//
//class Square_Class : public Quadrilateral_Class {
//public:
//    Square_Class( const sf::Color& col, const sf::Vector2f& p1,
//                 const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4,
//                  std::string name = "Square")
//            : Quadrilateral_Class(std::move(name), col, p1, p2, p3, p4) {
//        // Проверяем, что переданные точки образуют квадрат
//        if (!is_possible_draw()) {
//            throw std::invalid_argument("The provided points do not form a square.");
//        }
//    }
//
//private:
//    bool is_possible_draw() override {
//        // Проверяем, что все стороны равны
//        float side1_length = std::abs(this->m_p2.x - this->m_p1.x);
//        float side2_length = std::abs(this->m_p3.y - this->m_p2.y);
//        float side3_length = std::abs(this->m_p4.x - this->m_p3.x);
//        float side4_length = std::abs(this->m_p1.y - this->m_p4.y);
//
//        return (std::abs(side1_length - side2_length) < 1e-5) &&
//               (std::abs(side2_length - side3_length) < 1e-5) &&
//               (std::abs(side3_length - side4_length) < 1e-5);
//    }
//};
