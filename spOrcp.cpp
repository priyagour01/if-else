#include<iostream>
using namespace std;

int main (){
    int cp;
    cout<<"Enter cost price"<<endl;
    cin>>cp;
    int sp;
    cout<<"Enter selling peice"<<endl;
    cin>>sp;
    if (sp>cp) {
        cout<<"profit is "<<sp-cp<<endl;
    }
   else if (sp<cp) {   //cp>sp
          cout<<"loss is "<<cp-sp<<endl;;
    }
    else  {
        cout<<"No profit No loss"<<endl;
    }
}