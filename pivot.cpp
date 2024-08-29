#include<iostream>
using namespace std;

int leftSum(int arr[],int n,int i){
 int sum=0;
 arr[-1]=0;
 for( i=0;i<n;i++){
    sum=sum+arr[i-1];
 }

 return sum;
}


int rightSum(int arr[],int n, int i){
 int sum=0;
 for( i=0;i<n;i++){
    sum=sum+arr[i+1];
 }

 return sum;
}


int main(){
    int n=4;
    int myarr[4]={1,3,2,4};

    for(int i=0;i<n;i++){
     if(leftSum(myarr,n,i)==rightSum(myarr,n,i))
       cout<<"Element at index "<<i<<" is the pivot"<<endl;
    }

    return 0;
}