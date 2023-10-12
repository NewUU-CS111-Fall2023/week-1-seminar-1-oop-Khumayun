/*
 * Author:
 * Date:
 * Name:
 */

#include "task-2.h"

class Employer:public Person {
private:
    int hours_per_week;
    int room_no;
public:
    Employer(const std::string& first_name, const std::string& last_name): Person(first_name, last_name) {}
    void setHours(int hours){
        hours_per_week = hours;
    }
    void setRoom(int no){
      room_no = no;
    }
    std::string getFullInfo(){
        return getFullName() + " hours/week: " + std::to_string(hours_per_week) + " room: " + std::to_string(room_no);
    }
};

class Guest: public Person {
private:
    int visit_date;
public:
    Guest(const std::string& first_name, const std::string& last_name): Person(first_name, last_name) {}
    void setVisitDate(int d){
        visit_date = d;
    }
};

class Student: public Person {
private:
    int id;
    int year_of_start;
    std::string study_track;
public:
    Student(const std::string& first_name, const std::string& last_name): Person(first_name, last_name) {}
};