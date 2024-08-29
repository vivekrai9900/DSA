#include<iostream>
using namespace std;

int sqroot(int n){
    int s= 0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans= -1;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }

        if(mid*mid>n){
            e= mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int number, int presicion, int tempSol){
    double factor=1;
    double ans= tempSol;
    for(int i=0; i<presicion; i++){
        factor=factor/10;

        for(double j=ans; j*j<number; j=j+factor){
            ans=j; 
        }
    }

    return ans;
}


int main(){
    int n;
  cout<<"enter the number "<< endl;
  cin>> n;

  int tempAns=sqroot(n);

  cout<<"temp ans is:  "<<tempAns<<endl;

  double sol= morePrecision(n,4,tempAns);

  cout<<"the sq root is: "<<sol<< endl;

}