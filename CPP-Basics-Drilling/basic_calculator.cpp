#include <iostream>
using namespace std;

int add(int a,int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

void divide(int a, int b){
    if(b==0){
        cout<<"Not possible";
    }else{
        cout<<"Div = "<<a/b;
    }
    
}

int main(){
    int n1, n2, choice;

    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
    cout<<"\nPlease select(1-4) to perform any operation from the above list: ";
    cin>>choice;

    switch(choice){
        case 1: cout<<"Sum = "<< add(n1,n2);
                break;
        case 2: cout<<"Difference = "<< sub(n1,n2);
                break;
        case 3: cout<<"Product = "<< mul(n1,n2);
                break;
        case 4: divide(n1,n2);
                break;
        default: cout<<"Invalid choice";
    }

    return 0;
}
