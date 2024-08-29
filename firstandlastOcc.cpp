#include<iostream>
using namespace std;

int lastocc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
    
     mid= s+(e-s)/2;


    }

    return ans;
}



int firstocc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
    
     mid= s+(e-s)/2;


    }

    return ans;
}


int main(){
    int myarr[8]={0,0,1,1,2,2,2,2};
//    pair<int,int>p;
//    p.first=firstocc(arr,8,2);
//    p.second=lastocc(arr,8,2);

//  int first=firstocc(myarr,8,2);
//  int last=lastocc(arr,8,2);

   cout<<"the first  Occerence is "<<firstocc(myarr,8,2)<<endl;
   cout<<"the last  Occerence is "<<lastocc(myarr,8,2)<<endl;


   return 0;

}