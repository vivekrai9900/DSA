#include<iostream>
using namespace std;

int getroot(int n){
    int s=0;
    int e=n;
    long long int mid= s+(e-s)/2;
    int ans= -1;
    while(s<=e){

    long long int sq=mid*mid;
        if(sq>n){
            e=mid-1;
        }
        else if(sq<n){
            ans=mid;
            s=mid+1;
        }

        else{
            return mid;
        }
      mid= s+(e-s)/2;  
    }

    return ans;
}


double moreprecision(int n, int precision, int tempsol){

    double ans= tempsol;

    double factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            
             ans=j;
        }

    }

    return ans;

}

int main(){

int n;
cout<<"enter the number "<<endl;
cin>>n;

int tempsol= getroot(n);   
cout<<"the answer is "<<moreprecision(n,3,tempsol)<<endl; 



return 0;
}