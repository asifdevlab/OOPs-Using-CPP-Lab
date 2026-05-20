#include<iostream>
using namespace std;

class B;
class A{
    private:
    int salary;

    public:
    A(){
        salary = 50000;
    }

    void showposition(){
        cout<<"The employee is Manager"<<endl;
    }

    friend class B;
};

class B {
    public:
    void showDetails(A a){
        cout<<"Salary of Employee: "<< a.salary<<endl;
        a.showposition();
    }
};

int main(){
    A a;
    B b;
    b.showDetails(a);

    return 0;
}