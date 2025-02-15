#include<iostream>
using namespace std;

  int main () {

    // 172 times FIRST METHOD
    //  for(int i=19; i<=190; i++){
    //     if (i%19==0){
    //         cout<<i<<" ";
    //     }
    //  }

     // SECOND METHOD ONLY 10 TIMES
    for(int i=19; i<=190; i=i+19){
        //if (i%19==0){
            cout<<i<<" ";
        }
     }
  