#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout<<"Enter three number: ";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<"Number 1 is the greatest";
        }else{
            cout<<"Number 3 is the greatest";
        }
    }else{
        if(num2>num3){
            cout<<"Number 2 is the greatest";
        }else{
            cout<<"Number 3 is the greatest";
        }
    }
   return 0;

}