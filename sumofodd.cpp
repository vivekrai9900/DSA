#include<iostream>
using namespace std;
int main(){
    int n,  i, sum;
    cout<<"enter the vlue of n  "<<endl;
    cin>>n;
    sum=0;
    i=1;
    while(i<=n){
     sum=sum+i;
     i=i+2;
    }
    cout<<"the sum of odd number is  "<< sum <<endl;
}