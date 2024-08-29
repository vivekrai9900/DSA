#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> time, int n, int m, int mid ){
    int personCount=1;
    int totalTime=0;
    for(int i=0; i<n;i++){
       

       if(totalTime + time[i]<= mid){

       totalTime+=time[i];

    }else{
    personCount++;
    if(personCount>m && time[i]>mid){
    return false;
    }
    totalTime= time[i];
    }
    }

    return true;

}


int bookAllocation(vector<int> time, int n, int m ){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=time[i];
    }

    int e= sum;

    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<e){
        if(isPossible(time, n, m, mid)){
            ans= mid;
            e=mid-1;
            

        }

        else{
            s=mid+1;
        }
     mid= s+(e-s)/2;


    }

    return ans;
}

int main(){
    vector<int> time = {10,20,30,40};
    int m=2;
    int n=4;

    cout<<"the ans is"<<bookAllocation(time,n,m)<<endl;

    return 0;
}