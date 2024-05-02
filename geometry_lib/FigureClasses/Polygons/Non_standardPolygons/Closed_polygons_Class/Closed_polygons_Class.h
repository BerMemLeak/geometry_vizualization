//
// Created by user on 01.05.2024.
//
#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "../Interface_Class/FigureInterface.h"

class Closed_polygons_Class : public FigureInterface {
public:
    Closed_polygons_Class(std::string name, const sf::Color& col, const std::vector<sf::Vector2f>& vertices);

    void draw() override;

private:
    std::vector<sf::Vector2f> m_vertices;

    bool is_possible_draw() override;
};
