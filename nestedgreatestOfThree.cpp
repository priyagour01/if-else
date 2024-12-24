#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    cout<<"Enter the first number"<<endl;
    cin>>a;

    cout<<"Enter the second number"<<endl;
    cin>>b;

    cout<<"Enter the third number"<<endl;
    cin>>c;
    //a>b and a>c -> a>c -> a greatest 

    if (a>b) {  //b can never be the greatest
    if(a>c) {
        cout<<a<<" is greatest"<<endl;
    }
    else {  //c>a , a>b -> c>a>b
          cout<<c<<" is greatest"<<endl;

    }
    }
else{
      //b>a
      if(b>c) {
        cout<<b<<" is greatest"<<endl;
      }
      else{  //c>b , c>b>a
        cout<<c<<" is greatest"<<endl;
      }
}
   return 0;
    
}