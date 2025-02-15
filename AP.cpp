  // display this AP - 1,3,5,7,9..... upto 'n' terms.

// #include<iostream>
// using namespace std;
// int main () {
//     int num;
//     cout<<"Enter Number"<<endl;
//     cin>>num;
//     //1,3,5,7,9,.....

//     for(int i=1; i<=2*num-1; i+=2) {
//         cout<<i<<" "<<endl;

//     }
// }

  // display this AP - 4,7,10,13,16,... upto 'n' terms.

  #include <iostream>
  using namespace std;
    
    int main () {
        int n;
        cout<<"Enter Number a"<<endl;
        cin>>n;

        // for(int i=1; i<=3*n+1; i+=3) {
        //     cout<<i<<" "<<endl;
        // }

        int a = 4;
        for(int i=1; i<=n; i++) {
            cout<<a<<" "<<endl;
            a = a + 3;
        }
    }