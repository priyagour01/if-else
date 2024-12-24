 
 //Take 3 numbers input and tell if they can be sides of a triangle.
 #include <iostream>
using namespace std;

int main () {
   int a;
   cout<<"Enter number a"<<endl;
   cin>>a;
    int b;
   cout<<"Enter number b"<<endl;
   cin>>b;
    int c;
   cout<<"Enter number c"<<endl;
   cin>>c;
   if (a+b>c and b+c>a and c+a>b) {
    cout<<"Valid Triangle"<<endl;

   }
   else {
    cout<<"Invalid Triangle"<<endl;

   }

   return 0;
}