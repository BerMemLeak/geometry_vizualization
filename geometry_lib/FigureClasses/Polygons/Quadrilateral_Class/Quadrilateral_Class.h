//
// Created by user on 01.05.2024.
//
#pragma once
#include <SFML/Graphics.hpp>
#include "../Interface_Class/FigureInterface.h"

class Quadrilateral_Class : public FigureInterface {
public:
    Quadrilateral_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1, const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4);
    void draw() override;

protected:
    sf::Vector2f m_p1, m_p2, m_p3, m_p4;
    bool is_possible_draw() override;
};


