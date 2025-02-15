//  WAP to find the highest factor of a number 'n' (other than n itself).

#include <iostream>
using namespace std;
 
 int main () {
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    // for(int i=1; i<=num; i++) {
    //     if(num%i==0){
    //     cout<<i<<" "<<endl;
    //     }
    // }

    int f = 1;   // store hightest factor
    //for(int i=1; i<num; i++) 
      for(int i=1; i<=num/2; i++) {
        if (num%i==0) 
            f = i;
    }
        cout<<f;
    


 }