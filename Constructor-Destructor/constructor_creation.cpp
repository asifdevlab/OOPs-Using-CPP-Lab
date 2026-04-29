#include <iostream>
using namespace std;

class Book{
    private:
        string name;
        string author;
        int id;
        int price;
    
    public:
        //defaut constructor
        Book(){
            name = "Unknown";
            author = "Unknown";
            price = 0 ;
            cout << "Default constructor is called."<<endl;
            cout <<"Name of the book " << name <<" by " << author <<" price "<<price<<endl;
        }

        Book(string n, string a, int p){
            name = n;
            author = a;
            price = p;
            cout << "Parameterized constructor is called."<<endl;
            cout <<"Name of the book " << name <<" by " << author <<" price "<<price<<endl;
        }

        Book(Book &b){
            name = b.name;
            author = b.author;
            price = b.price;
            cout << "Copy constructor is called."<<endl;
            cout <<"Name of the book " << name <<" by " << author <<" price "<<price <<endl;
        }
};

int main(){
    Book b1;
    Book b2("C++", "Pooja Malhotra", 480);
    Book b3(b2);
    return 0;
}