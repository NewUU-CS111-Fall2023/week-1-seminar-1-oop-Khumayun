/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task-1.h"
//#include "task-2.h"
#include "task-3.h"

int main() {
    std::cout << "Task 1" << std::endl;
    Summation numbers;
    std::cout << numbers.sum(1, 2) << std::endl;

    std::cout << "Task 2" << std::endl;
    // call for task 2
    Person p("Alisher", "Navoi");
//    p.setName();
    std::cout << p.getFullName() << std::endl;

    std::cout << "Task 3" << std::endl;
    // call for task 3
    Employer emp("Mark", "Z");
    emp.setHours(40);
    emp.setRoom(304);
    std::cout << emp.getFullInfo() << std::endl;
    std::cout << "Task 4" << std::endl;
    // call for task 4

    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
