#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

int mid = start + (end-start)/2;
    while(start<=end){
    if(key==arr[mid]){
        printf("key is found at position:  %d  \n", mid+1);
        return mid;
    }
    if(key>arr[mid]){
        start= mid+1;
        }

        else{
            end = mid-1;
        }

 mid = start + (end-start)/2;
    }

    return -1;
}


int main(){
    printf("you are using binary search \n");

    int evenArr[]={1,2,3,4,5,9};

    int oddArr[]={2,4,5,6,7};

    int index= binarySearch(evenArr,6,9);

    printf("index: %d", index);
}