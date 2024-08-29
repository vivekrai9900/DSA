#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int cow=1;
    int lastPos= stalls[0];

    for(int i=0; i<stalls.size(); i++){
         if(stalls[i]-lastPos>=mid){
            cow++;

            if(cow==k){
                return true;
            }

            lastPos= stalls[i];
         }
    }

    return false;
}


int aggresiveCow(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());

    int s=0;
    int maxi=-1;

    for(int i=0; i<stalls.size();i++){
        maxi= max(maxi, stalls[i]);
    }

    int e= maxi;

    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}



int main(){
    vector<int> stalls ={4,2,1,3,6};
    int k= 2;

    cout<<"the solution is "<<aggresiveCow(stalls,k)<<endl;

    return 0;
}