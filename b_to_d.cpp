#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int res=0;
    int i=0;
    cout<<"enter the binary number "<<endl;
    cin>>n;

    while(n!=0){
        int digit= n%10;
        if(digit==1){
            res=digit*pow(2,i)+res;
        }
        n=n/10;
        i++;
    }
    cout<<"the decimal number is : "<< res<<endl;
}