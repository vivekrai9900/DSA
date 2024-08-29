#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int res=0;
    int i=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        res=pow(10,i)*bit+res;
        n=n>>1;
        i++;
    }
    cout<<"the binary for this number is : "<<res<<endl;

}