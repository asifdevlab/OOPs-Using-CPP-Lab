#include<iostream>
#include<string>
using namespace std;

class Teacher{
    protected:
    string subject;

    public:
    void setsub(){
        cin.ignore();
        cout<<"Enter the subject: ";
        getline(cin, subject);
    }

    void teach(){
        cout<<"Professor teaches "<<subject<<endl;
    }
};

class Researcher{
    protected:
    string researchArea;

    public:
    void setResearch(){
        cout<<"Enter the field of research: ";
        getline(cin,researchArea);
    }

    void research(){
        cout<<"Professor researches in  "<<researchArea<<endl;
    }
    
};

class Professor : public Teacher, public Researcher{
    public:
    void setdetails(){
    setsub();
    setResearch();
    }
    
    void showRole(){
        cout<<"\nProfessor Role"<<endl;
        cout<<"---------------------"<<endl;
        teach();
        research();

        cout<<"Professor performs both teaching and research activities."<<endl;
    }
};

int main(){
    Professor p1;
    p1.setdetails();
    p1.showRole();

    return 0;

}

