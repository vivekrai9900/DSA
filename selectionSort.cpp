#include<iostream>
using namespace std;


int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int  minIndex = i;
        for(int j=i+1; j<n; j++){

            if(arr[j]< arr[minIndex]){
                minIndex=j;
            }
        } 

       swap(arr[minIndex],arr[i]);

    }


    for(int i=0; i<n;i++){
        cout<<arr[i];
    }

    return 0;
};



int main(){
    int arr[]={1,5,9,3,6};

    int sorted = selectionSort( arr,5);
}