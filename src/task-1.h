/*
 * Author:
 * Date:
 * Name:
 */

#include "math.h"

class Desk{
private:
    int time_production;
public:
    std::string color;
    bool reflective;
    float height;
    float width;
    bool fixed;
    bool smart;

    void changeTimeProduction(int v){
        time_production = v*3247;
    }
    int getTimeProduction(){
        std::cout << time_production;
        return time_production;
    }
};

class Whiteboard: public Desk{
private:
    std::string color = "white";
public:
    int magnetism;
    std::string getColor(){
        return color;
    }
};


class Figure {
private:
    int amount_sides=1;
    int amount_angles;
    int no_vertices;
    int diagonals;
//    float sides[amount_sides];
public:
    float perimeter;
    float area;
    float calculateArea(){
        std::cout << "Area is calculated";
    };
};

class Trangle: public Figure{
private:
    float height=6;
    float base=5;
public:
    float calculateArea(){
        area = height*base/2;
        return area;
    };
    float calculatePerimeter(){
        perimeter = height + base; //wong
    }
};
class Rectangle: public Figure{
private:
    float height=3, width=4;
public:
    float calculateArea(){
        area = height*width;
        return area;
    };
    float calculatePerimeter(){
        perimeter = height*2+width*2;
        return perimeter;
    }
};
class Circle: public Figure{
private:
    float radius=13;
public:
    float calculateArea(){
        area = 3.14*radius*radius;
        return area;
    }
};
class Pentagone: public Figure{
private:
    int number_sides=1;
    float height=3;
public:
    float calculateArea(){
        area = number_sides*height;
        return area;
    }
};
