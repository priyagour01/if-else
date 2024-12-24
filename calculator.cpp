#include<iostream>
using namespace std;
int main () {
    int num1;
    cout<<"Enter num1"<<endl;
    cin>>num1;

    int num2;
    cout<<"Enter num2"<<endl;
    cin>>num2;

    char op;
    cout<<"Enter op"<<endl;
    cin>>op;

    if (op=='+') cout<<num1+num2<<endl;
    if (op=='-') cout<<num1-num2<<endl;
    if (op=='*') cout<<num1*num2<<endl;
    if (op=='/') cout<<num1/num2<<endl;
      
      return 0;
}