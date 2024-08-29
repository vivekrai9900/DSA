#include<iostream>
using namespace std;

int mountain_peak(int arr[], int size){
    int s=0; 
    int e= size-1;
    int mid= s+(e-s)/2;

    int ans =-1;

    while(s<=e){
        if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
            // return mid;
            int ans = arr[mid];
            return ans;
        }

        else if(arr[mid]>arr[mid+1]){
            e= mid-1;
        }else{
            s=mid+1;
        }
        mid= s+ (e-s)/2;
}
return  -1;
    }


    int main(){
        int arr[]={1,2,3,4,10, 11, 3,2,1};

        int index = mountain_peak(arr, 7);
        int peak = mountain_peak(arr, 7);

        // printf("the peak of the mountain is at index :  %d", index);
        printf("the peak of the mountain is  :  %d", peak);

        return 0;
    }