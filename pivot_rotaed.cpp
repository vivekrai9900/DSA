#include<iostream>
using namespace std;

int find_pivot(int arr[], int size){
    int s= 0;
    int e= size-1;
    int mid= s+ (e-s)/2;

    int ans =-1;
    while(s<e){
        if(arr[mid]>= arr[0]){
        s= mid+1;
        }else{
        e= mid-1;
        }

        mid= s+ (e-s)/2;
    }

    return s;
  
}


int main(){
    int arr[]={7,8,9,10,1,2,3};

    int ans= find_pivot(arr,7);

    printf("pivot is at index :  %d", ans);

    return 0;
}