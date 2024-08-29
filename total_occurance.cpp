#include<iostream>
using namespace std;

int total_occ(int l, int r){
    // int ans = -1;

    int ans= (r-l)+1;

    return ans;


     
};

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

    int arr[]={1,2,2,2,2,2,3,4,5};
    int l_ans = l_most_occurance(arr,8,2);
    int r_ans = r_most_occurance(arr,8,2);

    int ans = total_occ(l_ans,r_ans);

    printf("total occ of 2 is :  %d ", ans);

    return 0;
}