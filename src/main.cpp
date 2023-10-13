/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task-1.h"


int main() {
    std::cout << "Task 1" << std::endl;
    Desk desk610;
//    std::cout << sizeof(desk610);
    desk610.smart = true;
    desk610.fixed = true;
    desk610.reflective = false;
    desk610.width = 100.43;
    desk610.height = 50.33;
    desk610.changeTimeProduction(15);
    std::cout << "Time: " << desk610.getTimeProduction() << std::endl;
    std::cout << "Reflective: " << desk610.reflective << std::endl;
    std::cout << "Size: " << desk610.height << "x" << desk610.width << std::endl;
    std::cout << "Fixed: " << desk610.fixed << std::endl;
    std::cout << "Smart: " << desk610.smart << std::endl;
    std::cout << "Color: " << desk610.color << std::endl;

    std::cout << std::endl << "Task 2" << std::endl;
    Whiteboard wh610;

    wh610.smart = false;
    wh610.fixed = false;
    wh610.reflective = false;
    wh610.width = 111;
    wh610.height = 5000;
//    wh610.height = "fref";
    wh610.changeTimeProduction(93);
    wh610.magnetism = 32;
    std::cout << "Time: " << wh610.getTimeProduction() << std::endl;
    std::cout << "Reflective: " << wh610.reflective << std::endl;
    std::cout << "Size: " << wh610.height << "x" << wh610.width << std::endl;
    std::cout << "Fixed: " << wh610.fixed << std::endl;
    std::cout << "Smart: " << wh610.smart << std::endl;
    std::cout << "Color: " << wh610.getColor() << std::endl;

    std::cout << std::endl << "Task 3" << std::endl;
    Trangle tr;
    Circle cr;
    Rectangle rec;
    Pentagone pen;

    std::cout << "Triangle: " << tr.calculateArea() << std::endl;
    std::cout << "Circle: " << cr.calculateArea() << std::endl;
    std::cout << "Rectangle: " << rec.calculateArea() << std::endl;
    std::cout << "Pentagone: " << pen.calculateArea() << std::endl;
    return 0;
}
