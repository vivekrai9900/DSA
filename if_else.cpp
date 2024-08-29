#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value "<<endl;
    // cin>> a;
    a=cin.get();

    cout<<"the value"<< a <<endl;
    // cout<<"enter the value of b "<<endl;
    // cin>> b;
    // cout<<"enter the value of c "<<endl;
    // cin>>c;
   cout<<a<<endl;
    if(a>=65&&a<=90){
        cout<<"it is capital"<<endl;
    }
    else if(a>=97&&a<=122){
        cout<<"it is small"<<endl;
    }

    else{
        cout<<" it is a number"<<endl;
    }
}