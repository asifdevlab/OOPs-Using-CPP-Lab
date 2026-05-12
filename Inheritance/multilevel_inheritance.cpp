#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
    int empId;
    float salary;

    public:
    void set(){
        cout<<"Enter Employee ID:";
        cin>>empId;

        cout<<"Enter the salary: ";
        cin>>salary;
    }


    void displayEmployee(){
        cout<<"Emloyee ID: "<<empId<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager: public Employee {
    protected:
    string department;
    
    public:
    void set(){
        Employee::set();
        cout<<"Enter the Department: ";
        cin>>department;
    }

    void display(){
        displayEmployee();
        cout<<"Department: "<<department<<endl;
    }

    void calculateBonus(){
        float bonus;
        bonus = salary*0.1;
        cout<<"Bonus: "<<bonus<<endl;
    }
};

class SeniorManager : public Manager{
    public:
    void displayFullDetails(){
        display();
    }

};

int main(){
    SeniorManager m1;
    m1.set();
    m1.displayFullDetails();
    m1.calculateBonus();

    return 0;
}
