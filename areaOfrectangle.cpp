// given the length and breadth of a rectangle, 
//write a program to find whether the area of the rectangle is greater than its perimeter. 
 
 
#include<iostream>
using namespace std;

int main (){
    int length;
    cout<<"Enter length"<<endl;
    cin>>length;
    int breadth;
    cout<<"Enter breadth"<<endl;
    cin>>breadth;
    
    int area = length * breadth;
    //cout<<"area"<<endl;
    int perimeter = 2*(length+breadth);
     //cout<<"perimeter"<<endl;
    if (area>perimeter) {
        cout<<"The area of the rectangle is greater than its perimeter"<<endl;
        
    }
    else if (area<perimeter) {
        cout<<"The area of the rectangle is less than its perimeter"<<endl;

    }
     else {
         cout<<"The area of the rectangle is equal to its perimeter"<<endl;
     }

    return 0;
}