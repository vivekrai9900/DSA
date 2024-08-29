#include<iostream>
using namespace std;
int main(){
    float c,f,i;
    cout<<"enter the operation ypu want to perform  for celcius t ferenheit press 1 and for reverse press 0"<<endl;
    cin>>i;
    if(i==1){
        cout<< "enter the celcius temp  "<<endl;
        cin>>c;
        f=(9*c/5)+32;
        cout<<"temp in fahrenheit is :"<<f;
    }

    if(i==0){
        cout<<"enter the temp in fahrenheit  "<<endl;
        cin>>f;
        c=(f-32)*5/9;
        cout<<"temp in celcius is :"<<c;
    }
}