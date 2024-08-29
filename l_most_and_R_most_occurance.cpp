#include<iostream>
using namespace std;

int l_most_occurance(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid= start +(end-start)/2;
    int ans= -1;

    while(start<=end){
        if(arr[mid]==key){
            end= mid-1;
            ans=mid;
        }

       else if(key>mid){
            start=mid+1;
        }else{
            end=end-1;
        }

        mid= start +(end-start)/2;
    }

    return ans;
}


int r_most_occurance(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid= start +(end-start)/2;
    int ans= -1;

    while(start<=end){
        if(arr[mid]==key){
            start= mid+1;
            ans=mid;
        }

        if(key>mid){
            start=mid+1;
        }else{
            end=end-1;
        }

        mid= start +(end-start)/2;
    }

    return ans;
}

int main(){
    int arr[]={1,3,6,6,9,10,11,11,11,11,11,45};

    int l_ans = l_most_occurance(arr, 12, 11);
    int r_ans= r_most_occurance(arr,12,11);

    printf("left most occ is %d: \n", l_ans);
    printf("right most occ is %d: \n", r_ans);

    
}