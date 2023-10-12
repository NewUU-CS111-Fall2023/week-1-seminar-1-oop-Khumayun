/*
 * Author:
 * Date:
 * Name:
 */

class Accounts{

    int empId;

    double salary, basic, allowances, deductions;

public:
    Accounts(int empId):empId(empId){}

    //read salary info
    void readEmployeeInfo(int empId){
        cout<<"Enter basic for the employee"<<empId<<":"; cin>>basic;
        cout<<"allowances:"; cin>>allowances;
        cout<<"deductions:"; cin>>deductions;

    }
    //calculate salary
    double calculateSalary(){
        salary = basic+ allowances - deductions;
        return salary;
    }

    //display details
    void display(){
        salary = calculateSalary();
        cout<<"Employee: "<<empId<<endl;
        cout<<"Salary: "<<salary;
    }

};