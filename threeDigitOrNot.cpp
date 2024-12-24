// Take positive integer input and tell if it is a three digit number or not.

#include <iostream>
using namespace std;
 
 int main () {
    int num ;
    cout<<"Enter number"<<endl;
    cin>>num;
    if (num>90 && num<1000) {
      cout<<"Three digit number";
    }
    else {
      cout<<"Not a three digit number";
    }

    return 0 ;

 }