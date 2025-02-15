// #include <iostream>
// using namespace std;

//  int main (){
//     float length , width , area , perimetre;

//     cout<<"Enter length"<<endl;
//     cin>>length;

//     cout<<"Enter width"<<endl;
//     cin>>width;
    
//     cout<<"Enter area"<<endl;
//     cin>>area;
    
//     cout<<"Enter perimeter"<<endl;
//     cin>>perimetre;

//     area = length * perimetre;
//     perimetre = 2 * (length + width);

//     if (area>perimetre) {
//         cout<<"The area of the rectangle is greater than its perimeter"<<endl;
        
//     }
//     else if (area<perimetre) {
//         cout<<"The area of the rectangle is less than its perimeter"<<endl;

//     }
//      else {
//          cout<<"The area of the rectangle is equal to its perimeter"<<endl;
//      }
    

//  }

#include <iostream>
using namespace std;
 
 int main (){
    int length;
    cout<<"enter length"<<endl;
    cin>>length;

    int width;
    cout<<"enter width"<<endl;
    cin>>width;

    int area;
    cout<<"enter area"<<endl;
    cin>>area;
    
    int perimeter;
    cout<<"enter perimeter"<<endl;
    cin>>perimeter;
    
    if (area>perimeter) {
        cout<<"area of the rectangle greater than perimeter"<<endl;
    } 
    else if (area<perimeter) {
        cout<<"area of the rectangle less than perimeter"<<endl;
    }
    else {
        cout<<"area and perimeter are equal"<<endl;
    }
    return 0;
 }