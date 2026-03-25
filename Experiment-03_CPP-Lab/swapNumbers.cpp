#include <iostream>
using namespace std;

void swapCallbyvalue(int x, int y){
    int temp; 
    temp = x;
    x = y;
    y = temp;
}

void swapCallbyReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>> n1 >> n2;

    cout<<"Numbers before swapping(call by value): " << n1 <<" " << n2 << endl;
    cout<<"Number after swapping:";
    swapCallbyvalue(n1,n2);
    cout<< n1 <<" "<< n2 << endl;

    cout<<endl <<"Number before swapping: " << n1 << " " << n2 << endl;
    cout<<"Number after swapping(call by reference):" << endl;
    swapCallbyReference(n1,n2);
    cout << n1 <<" " << n2 << endl;

    return  0;

}