// #include <iostream>
// using namespace std;

//   int main () {
//     int n;
//     cout<<"Enter Number"<<endl;
//     cin>>n;
    //   //1,2,4,8,16.....
    //   int a = 1;
    // for(int i=1; i<=n; i++) {
    //     cout<<a<<" "<<endl;
    //     a = a * 2;
    // }
      
      //5,15,45....
//     int a = 5;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" "<<endl;
//         a = a * 3;
//     }
//     return 0;
//   }

  // homework:-  display this GP - 3,12,48,...... upto 'n' terms.

  #include <iostream>
  using namespace std;
   int main () {
    int num ;
    cout<<"Enter Number"<<endl;
    cin>>num;

    int a = 3;
    for (int i=1; i<=num; i++) {
        cout<<a<<" "<<endl;
        a = a * 4;
    }
   }