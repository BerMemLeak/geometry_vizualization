//
// Created by user on 25.04.2024.
#pragma once
#include <string>
#include <utility>
#include <memory>
#include <SFML/Graphics.hpp>

class FigureInterface {
public:
    std::string get_name(){
        return name;
    };
    ~FigureInterface()= default;
    virtual void draw() = 0;
    // Конструктор перемещения

    // нельзя тут при помощи стд мув
    FigureInterface(FigureInterface&& other) noexcept {
        name = other.name;
        color = other.color;
        display_height = other.display_height;
        display_width = other.display_width;
        vertex_count = other.vertex_count;
    }

    // Оператор присваивания перемещения
    FigureInterface& operator=(FigureInterface&& other) noexcept {
        if (this != &other) {
            name = std::move(other.name);
            color = other.color;
            display_height = other.display_height;
            display_width = other.display_width;
            vertex_count = other.vertex_count;

        }
        return *this;
    }
protected:
    virtual bool is_possible_draw() = 0;

    FigureInterface( std::string& name, const sf::Color& col, int vertex_count,
                     int dispWidth = 800, int dispHeight = 600) :
            name(std::move(name)),
            color(col),
            display_width(dispWidth),
            display_height(dispHeight),
            vertex_count(vertex_count){};
    std::string name;
    sf::Color color;
    int display_width;
    int display_height;
    int vertex_count;
};
