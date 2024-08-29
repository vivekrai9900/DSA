#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s= mid+1;
        }else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }

    return s;
}


int search_in_rotated_arrya(int arr[], int key, int pivot, int size){
    int s= 0; 
    int e= size-1;
    if(arr[pivot]<=key && key<=arr[e]){
        s= pivot;

        while(s<=e){
        int mid=s+(e-s)/2;
        if(key==arr[mid]){
            return mid;
        }
        if(key> arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }

        mid= s+(e-s)/2;

        }

        return -1;
    }
    else{
        // s=0;
        e=pivot-1;

        while(s<=e){
             int mid=s+(e-s)/2;
        if(key==arr[mid]){
            return mid;
        }
        if(key> arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }

        mid= s+(e-s)/2;

        }

        return -1;
    }

    return 0;
    
}


int main(){
    int arr[]={9,15,27,1,2};

    int p_and= pivot(arr,5);

    int r_and= search_in_rotated_arrya(arr,15,p_and,5);

    printf("the pivot is:  %d \n", p_and);
    printf("the key is at index:  %d \n",r_and);

    return 0;
}