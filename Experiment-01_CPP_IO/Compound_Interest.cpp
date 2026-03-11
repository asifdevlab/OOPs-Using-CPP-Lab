#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
    double p,r,t,ci;

    cout<<"Enter values of p,r and t:";
    cin>>p>>r>>t;

    ci = p * pow((1 + r/100), t) - p;
    cout<<"The compound interest is "<< ci;

    return 0;
}