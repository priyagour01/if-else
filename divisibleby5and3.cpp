#include <iostream>
using namespace std ;

int main () {
    int x ;
    cout<<"Enter value of x"<<endl;
    cin>>x;
    if (x%5==0 && x%3==0) {
        cout<<"Divisible by 5 and 3"<<endl;

    }
    else {
         cout<<"Not divisible by 5 and 3"<<endl;
    }
}