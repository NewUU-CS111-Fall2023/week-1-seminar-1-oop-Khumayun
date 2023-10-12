/*
 * Author:
 * Date:
 * Name:
 */
#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
public:
    Person(const std::string& fname, const std::string& lname): first_name(fname), last_name(lname) {}
    std::string getFullName() {
        return first_name + " " + last_name;
    }
    bool setFirstName(const std::string& fname) {
        first_name = fname;
        if(fname == first_name){
            return true;
        }
        return false;
    }
    bool setLastName(const std::string& lname) {
        last_name = lname;
        if(lname == last_name){
            return true;
        }
        return false;
    }
};