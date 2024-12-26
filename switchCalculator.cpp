/* syntax -: switch (integer expression) {
/  case constant1:
       do this;
   case constant2:
       do this;
   case constant3:
        do this;
   default:
        do this;
  } */

    #include<iostream>
    using namespace std;
    int main ()
    {
    //     int num1 ;
    //     int num2 ;
    //     char op;
    //     cout<<"Enter num1"<<endl;
    //     cin>>num1;
    //     cout<<"Enter num2"<<endl;
    //     cin>>num2;
    //     cout<<"Enter op"<<endl;
    //     cin>>op;

    //     switch (op) {
    //     case '+':
    //         cout<<num1+num2<<endl;
    //         break;
    //      case '-':
    //         cout<<num1-num2<<endl;
    //         break;
    //      case '*':
    //         cout<<num1*num2<<endl;
    //         break;
    //      case '/':
    //         cout<<num1/num2<<endl;
    //         break;   
    //     default:
    //         cout<<"Invalid Operator"<<endl;  
    // }
    // return 0;

   int num1;
   int num2;
   char op;
   cout<<"Enter num1"<<endl;
   cin>>num1;
   cout<<"Enter num2"<<endl; 
   cin>>num2;
    
   cout<<"Enter op"<<endl;
   cin>>op;

   switch (op) {
    case '+' :
    cout<<num1+num2<<endl;
    break;
    case '-':
    cout<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1/num2<<endl;
    break;
   }
   return 0;
}
   

  
