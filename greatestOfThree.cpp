// take 3 positive integers input and print the greatest of them.

 #include <iostream>
 using namespace std;

 int main () {
    int a,b,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
     cout<<"Enter first number"<<endl;
    cin>>b;
     cout<<"Enter first number"<<endl;
    cin>>c;

     if (a>b and a>c) {
   // if (a<b and a<c) {
        //cout<<a<<" is minimum";
        cout<<a<<" is greatest";
    }
    else if (b>a and b>c) {
        //cout<<a<<" is minimum";
        cout<<b<<" is greatest";
    }
    else { 
        //cout<<a<<" is minimum";
        cout<<c<<" is greatest";
    }

    return 0;
 }


//   //HW)  take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

//   #include <iostream>
//   using namespace std;
   
//    int main (){
//     int a , b;
//     cout<<"Enter the 1st number"<<endl;
//     cin>>a;
//     cout<<"Enter the 2nd number"<<endl;
//     cin>>b;
//     if ((a%5==0 or a%3==0)and(a%15!=0)){
//         cout<<"Divisible by 5 or 3"<<endl;
//     }
//     else {
        
//      cout<<" Not divisible by 15"<<endl;
//     }

//    return 0;
//    }