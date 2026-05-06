#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
    string name;

    protected:
    int age;

    public:
    void set(){
        cout<<"Enter name and age: ";
        cin>>name>>age;
    }

    int getage(){
        return age;
    }

    string getname(){
        return name;
    }


    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student: public Person{
    private:
    int marks;

    
    public:
    void d(){
        cout<<"Age :"<< age<< endl;
    }
    void set(){
        Person::set();
        cout<<"Enter marks"<<endl;
        cin>>marks;
        
    }

    int getmarks(){
        return marks;
    }

    void grade(){
        if(marks >= 90)
        cout<<"Grade is \'A\'"<<endl;
        else if(marks >= 80 && marks < 90)
        cout<<"Grade is \'B\' "<<endl;
        else
        cout<<"Grade is \'C\'"<<endl;
    }

    void studentDetails(){
        Person:: display();
        grade();
    }
};

int main(){
    Student s1;
  
    //s1.name; It shows error because name is private in the base class
    s1.set();
    s1.d();
    s1.studentDetails();
    return 0;
}

/* 1. Single Inheritance with Access Control

Concepts: private vs protected + method usage

Question:
Create a class Person:
private: name
protected: age
Public methods to set and display data

Create a derived class Student:
private: marks
A method to calculate grade based on marks

Task:
1. Access age in derived class
2. Try (and fail) to access name directly → use getter
3. Display full student details with grade */