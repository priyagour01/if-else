//HW)  take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

  #include <iostream>
  using namespace std;
   
   int main (){
    int a , b;
    cout<<"Enter the 1st number"<<endl;
    cin>>a;
    cout<<"Enter the 2nd number"<<endl;
    cin>>b;
    if ((a%5==0 or a%3==0)and(a%15!=0)){
        cout<<"Divisible by 5 or 3"<<endl;
    }
    else {
        
     cout<<" Not divisible by 15"<<endl;
    }

   return 0;
   }
   