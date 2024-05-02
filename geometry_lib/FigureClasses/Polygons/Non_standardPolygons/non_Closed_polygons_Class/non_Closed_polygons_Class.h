//
// Created by user on 01.05.2024.
//
#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include "../Interface_Class/FigureInterface.h"

class non_Closed_polygons_Class : public FigureInterface {
public:
    non_Closed_polygons_Class( const sf::Color& col, const std::vector<sf::Vector2f>& vertices,std::string name= "non_Closed_polygons");

    void draw() override;

protected:
    std::vector<sf::Vector2f> m_vertices;

    bool is_possible_draw() override;
};
