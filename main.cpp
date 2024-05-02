#include <iostream>
#include "library.h"
int main() {
    try {

        //рандомный треугольник
        Triangle w( sf::Color::Green, 100, 70, 150);
        w.draw();

        //равнобедренный треугольник
        RectangularTriangle v( sf::Color::Green, 30, 40, 50);
        v.draw();

        //равнобедренный треугольник
        IsoscelesTriangle l(sf::Color::Green, 90, 90, 40);
        l.draw();


        //Равносторонний треугольник
        EquilateralTriangle a( sf::Color::Green, 90, 90, 90);
        a.draw();


        //замкнутый многоугольник
        std::vector<sf::Vector2f> vertices1 = {
                {100.f, 100.f},
                {200.f, 50.f},
                {300.f, 150.f},
                {200.f, 200.f}
        };
        Closed_polygons_Class polygon1("Polygon", sf::Color::Red, vertices1);
        polygon1.draw();



    // незамкнутый многоугольник
        std::vector<sf::Vector2f> vertices2 = {
                {100.f, 100.f},
                {200.f, 50.f},
                {300.f, 150.f}
        };
        non_Closed_polygons_Class polygon2( sf::Color::Blue, vertices2);
        polygon2.draw();


    //    четырехугольник
        sf::Vector2f h1(100.f, 100.f);
        sf::Vector2f h2(100.f, 50.f);
        sf::Vector2f h3(300.f, 150.f);
        sf::Vector2f h4(300.f, 200.f);
        Quadrilateral_Class quad("Quadrilateral", sf::Color::Green, h1, h2, h3, h4);
        quad.draw();



        //параллелограмм
        sf::Vector2f z1(100.f, 100.f);
        sf::Vector2f z2(200.f, 50.f);
        float height = 100.f;
        Parallelogram_Class parallelogram("Parallelogram", sf::Color::Yellow, z1, z2, height);
        parallelogram.draw();



        //прямоугольник
        sf::Vector2f p1(100.f, 100.f);
        sf::Vector2f p2(300.f, 100.f);
        sf::Vector2f p3(300.f, 200.f);
        sf::Vector2f p4(100.f, 200.f);
        Rectangle_Class rectangle("Rectangle", sf::Color::Green, p1, p2, p3, p4);
        rectangle.draw();

        //квадрат
        Square_Class square( sf::Color::Red, sf::Vector2f(100, 100), sf::Vector2f(200, 100), sf::Vector2f(200, 200), sf::Vector2f(100, 200));
        square.draw();

        //ромб
        sf::Vector2f b1(100.f, 100.f);
        sf::Vector2f b2(200.f, 150.f);
        sf::Vector2f b3(300.f, 100.f);
        sf::Vector2f b4(200.f, 50.f);
        sf::Color color(255, 0, 0);
        Rhombus_Class rhombus("MyRhombus", color, b1, b2, b3, b4);
        rhombus.draw();


        //круг
        Circle circle("Circle", sf::Color::Blue, 50);
        // Вызов функции draw() для объекта Circle
        circle.draw();

        //эллипс
        Ellipse ellipse("Ellipse", sf::Color::Red, 80, 40);
        ellipse.draw();



    } catch (std::invalid_argument& err) {
        std::cout << err.what();
    }
    return 0;

}
