// take input percentage of a student and print the grade according to marks :
//1) 81-100 very good
//2) 61-80 good 
// 3) 41-60 average
//4) 40 fail



#include <iostream>
using namespace std;

int main () {
    // int num ;
    // cout<<"Enter marks"<<endl;
    // cin>>num;
    // if (num>=81 and num<=100) {
    //     cout<<"Very Good"<<endl;
    // }
    //  if(num>=61 and num<=80) {
    //     cout<<"Good"<<endl;
    // }
    // if (num>=41 and num<=60) {
    //     cout<<"Average"<<endl;
    // }
    // if(num<=40) {
    //    cout<<"Fail"<<endl;
    // }
    // return 0;

    int num ;
    cout<<"Enter marks"<<endl;
    cin>>num;
    if (num>81 and num<100) {
       cout<<"Very Good"<<endl;
    }
    else if (num>=61) {
        cout<<"Good"<<endl;
    }
    else if (num>=41) {
        cout<<"Averag"<<endl;
    }
    else {
        cout<<"Fail"<<endl;
    }
    return 0;
}