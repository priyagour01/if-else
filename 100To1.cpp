#include <iostream>
using namespace std;

 int main  () {
//     for (int i=100; i>=1; i/=2) {   //i-==2  //  i/=2
//           cout<<i<<" "<<endl;
//     } 

        //  ulta factor print
        
        int n;
        cout<<"Enter n"<<endl;
        cin>>n;
      for(int i=n/2; i>=1; i--) {   //i-==2  //  i/=2
           if (n%i==0) {
              cout<<i<<" ";
              break;   // to get out of the loop
           }
      }
 }