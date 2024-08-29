#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int res=0;
    int i=0;
    cout<<"enter a negative number "<< endl;
    cin>>n;
    while(n!=0){
        cout<<"hey"<<endl;
        int bit=n&1;
        res=bit*pow(10,i)+res;
        n=n>>1;
        i++;
    }

    cout<<"the binary number is : "<<res<<endl;
}