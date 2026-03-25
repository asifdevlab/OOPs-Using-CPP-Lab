#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, rev ="";
    // ❌ ERROR: rev is initialized with a space (" ")
    // This adds an extra space at the beginning of the reversed string
    // which causes incorrect comparison later.
    // ✅ FIX: Initialize as empty string -> string rev = "";
 
    cout<<"Enter a string: " << endl;
    getline(cin,str1);

    for(int i = str1.length() - 1; i >= 0; i--){
        rev += str1[i];
    }

    cout<<"Reversed string: "<< rev << endl;

    if(str1 == rev){
        cout<<"It is a pallindrome."<<endl;
    }else{
        cout<<"It is not a pallindrome."<<endl;
    }

    return 0;

}