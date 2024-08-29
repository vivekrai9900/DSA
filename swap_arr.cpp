#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    int i;
    for( i=0;i<size;i++){
        cout<<arr[i];
    }
}

void swap(int arr[], int size){
    int start=0;
    int end=4;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main(){
   int num[5] ={1,2,3,4,5};
   printArr(num,5);
   swap(num,5);
   cout<<"\n";
   printArr(num,5);

}