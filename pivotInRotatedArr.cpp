#include<iostream>
using namespace std;

int pivot(int arr[],int n){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){

        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }

      mid=s+(e-s)/2;  
    }

    return s;
}

int main(){
    int myarr[6]={7,8,9,12,1,2};
    cout<<"the pivot element is "<<pivot(myarr,6)<<endl;

    return 0;
}