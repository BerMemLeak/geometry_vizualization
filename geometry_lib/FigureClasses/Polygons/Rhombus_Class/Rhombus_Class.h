#pragma once
#include <SFML/Graphics.hpp>
#include "../Quadrilateral_Class/Quadrilateral_Class.h"

class Rhombus_Class : public Quadrilateral_Class {
public:
    Rhombus_Class(std::string name, const sf::Color& col, const sf::Vector2f& p1,
                  const sf::Vector2f& p2, const sf::Vector2f& p3, const sf::Vector2f& p4);

private:
    bool is_possible_draw() override;
};

