#include<iostream>
using namespace std;


void bubbelSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0; j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }


    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }

};


int main(){
    int arr[]={5,70,20,9,500,-230,-2,45,36,0,98,-23,900,1};

    bubbelSort(arr, 14);

    return 0;
}


