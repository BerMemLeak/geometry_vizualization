cmake_minimum_required(VERSION 3.0)
project(geometry_lib)

set(CMAKE_CXX_STANDARD 20)

# Определение исходных файлов
set(SOURCE_FILES library.cpp FigureClasses/Interface_Class/FigureInterface.h
        FigureClasses/Polygons/Triangle_Class/Triangle.h
        FigureClasses/Polygons/RectangularTriangle_Class/RectangularTriangle.h
        FigureClasses/Polygons/IsoscelesTriangle_Class/IsoscelesTriangle.h
        FigureClasses/Polygons/EquilateralTriangle_Class/EquilateralTriangle.h
        FigureClasses/Polygons/EquilateralTriangle_Class/EquilateralTriangle.h
        FigureClasses/Polygons/Non_standardPolygons/non_Closed_polygons_Class/non_Closed_polygons_Class.h
        FigureClasses/Polygons/Non_standardPolygons/Closed_polygons_Class/Closed_polygons_Class.h
        FigureClasses/Polygons/Quadrilateral_Class/Quadrilateral_Class.h
        FigureClasses/Polygons/Parallelogram_Class/Parallelogram_Class.h
        FigureClasses/Polygons/Square_Class/Square_Class.h
        FigureClasses/Polygons/Rhombus_Class/Rhombus_Class.h
        FigureClasses/Circles/Ellips_Class/Ellips_Class.h
        FigureClasses/Circles/SimpleCircle_Class/SimpleCircle_Class.h
        FigureClasses/Polygons/Triangle_Class/Triangle.cpp
        FigureClasses/Polygons/Square_Class/Square_Class.cpp
        FigureClasses/Polygons/Rhombus_Class/Rhombus_Class.cpp
        FigureClasses/Polygons/RectangularTriangle_Class/RectangularTriangle.cpp
        FigureClasses/Polygons/Rectangle_Class/Rectangle_Class.cpp
        FigureClasses/Polygons/Quadrilateral_Class/Quadrilateral_Class.cpp
        FigureClasses/Polygons/Parallelogram_Class/Parallelogram_Class.cpp
        FigureClasses/Polygons/Non_standardPolygons/non_Closed_polygons_Class/non_Closed_polygons_Class.cpp
        FigureClasses/Polygons/Non_standardPolygons/Closed_polygons_Class/Closed_polygons_Class.cpp
        FigureClasses/Polygons/IsoscelesTriangle_Class/IsoscelesTriangle.cpp
        FigureClasses/Polygons/EquilateralTriangle_Class/EquilateralTriangle.cpp)

# Создание библиотеки
add_library(geometry_lib SHARED ${SOURCE_FILES}
        FigureClasses/Polygons/Triangle_Class/Triangle.h
        FigureClasses/Polygons/Triangle_Class/Triangle.h)
target_include_directories(geometry_lib PUBLIC FigureClasses/Interface_Class)

# Подключение SFML
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(geometry_lib sfml-system sfml-window sfml-graphics sfml-audio sfml-network)













