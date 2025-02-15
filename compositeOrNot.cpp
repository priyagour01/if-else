#include <iostream>
using namespace std;
 
 int main () {
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    bool x = true;   //true is prime

    for(int i=2; i<=num/2; i++) {
        if (num%2==0) {
            //cout<<"Composite number"<<endl;
            x = false;
            break;  //to get out of the loop
        }
    }
    if(num==1) {
        cout<<"Not Prime Nor Composite"<<endl;
    }
    else if (x==true)  {
        cout<<"Prime Number"<<endl;
    }
    else {
        cout<<"Composite Number"<<endl;
    }
 }