// take positive integer input and tell if it is divisible by 5 or 3.

#include <iostream>
 using namespace std ;

int main () {
    int y;
    cout<<"Enter number y"<<endl;
    cin>>y;
    if (y%5==0 || y%3==0) {
        cout<<"Divisible by 5 or 3"<<endl;
    }
    else {
        cout<<"Not divisible by 5 or 3"<<endl;
    }

    return 0;
    
}