#include<iostream>
using namespace std;

int fact(int n){
    int m= 1000000007;
    long long res= 1;
    for(int i= 1; i<=n; i++){
       res=(res*i)%m;
    }

    return res;
}

int main(){
    int n;

    cout<<"enter the number"<<endl;
    cin>>n;

    int ans= fact(n);

    cout<<"the answer with mod 10^9 + 7 is "<<ans<<endl;

    return 0;
}