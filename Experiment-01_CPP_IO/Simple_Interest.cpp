#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float p,r,t,si;

    cout<<"Enter values of p,r and t:";
    cin>>p>>r>>t;

    si = (p*r*t)/100;
    cout<<"The simple interest is "<<setw(13) <<si;

    return 0;
}