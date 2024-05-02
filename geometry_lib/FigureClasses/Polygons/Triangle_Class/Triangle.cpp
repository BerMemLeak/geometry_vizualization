#include "Triangle.h"
#include <stdexcept>
#include <cmath>

Triangle::Triangle(const sf::Color& col, double A_size, double B_size, double C_size, std::string name)
        : FigureInterface(name, col, 3), A_size(A_size), B_size(B_size), C_size(C_size) {
    a_degree = acos((B_size*B_size + C_size*C_size - A_size*A_size) / (2*B_size*C_size));
    b_degree = acos((A_size*A_size + C_size*C_size - B_size*B_size) / (2*A_size*C_size));
    c_degree = acos((A_size*A_size + B_size*B_size - C_size*C_size) / (2*A_size*B_size));
}

bool Triangle::is_possible_draw() {
    bool condition1 = (A_size + B_size > C_size);
    bool condition2 = (A_size + C_size > B_size);
    bool condition3 = (B_size + C_size > A_size);
    bool condition4 = (c_degree+a_degree+b_degree)* 180.0 / M_PI == 180;
    return (condition1 && condition2 && condition3 && condition4);
}

void Triangle::draw() {
    if (!is_possible_draw()) {
        throw std::invalid_argument("Нельзя построить с такими аргументами");
    }
    sf::RenderWindow window(sf::VideoMode(display_width, display_height), name);

    float Ax = display_width/2.0f;
    float Ay = display_height/2.0f;

    float Bx = Ax + A_size * cos(a_degree);
    float By = Ay + A_size * sin(a_degree);

    float Cx = Ax + B_size * cos(b_degree);
    float Cy = Ay - B_size * sin(b_degree);

    sf::VertexArray triangle(sf::Triangles, vertex_count);
    triangle[0].position = sf::Vector2f(Ax, Ay);
    triangle[1].position = sf::Vector2f(Bx, By);
    triangle[2].position = sf::Vector2f(Cx, Cy);

    for (int i = 0; i < vertex_count; ++i) {
        triangle[i].color = color;
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(triangle);
        window.display();
    }
}
