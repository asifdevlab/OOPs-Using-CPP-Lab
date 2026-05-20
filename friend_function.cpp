#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;

    public:
    Employee(int val){
        salary = val;
    }

    friend void showSalary(Employee);
};

void showSalary(Employee emp){
    cout<<"Salary of Employee: "<<emp.salary;
}

int main(){
    Employee emp(10000);
    showSalary(emp);
    return 0;

}