#include<iostream>
using namespace std ;

 int  main (){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    // if (num>=0) {
    //     cout<<num;
    // }
    // else { //n<0
    //         cout<<-num;
    // }

    // if you want you change n into its absolute value

    if (num<0) num = -num;
    cout<<num;

    return 0;
 }