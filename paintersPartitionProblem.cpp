#include<iostream>
#include <bits/stdc++.h> 
using namespace std;




bool isPossible(vector<int> time, int k, int mid){

    int painter=1;
    int timeTaken=0;

    for(int i=0; i<time.size(); i++){
        if(timeTaken + time[i]<=mid){
            timeTaken+=time[i];
        }
        else{
            painter++;

            if(painter>k || time[i]>mid){
                return false;
            }
            timeTaken= time[i];
        }
    }

    return true;

}


int painterProblem(vector<int> time, int k){

    int s=0;
    int totalTime=0;

    for(int i=0; i<time.size(); i++){
         totalTime+=time[i];
    }

    int e= totalTime;

    int mid= s+ (e-s)/2;
    int ans= -1;

    while(s<=e){
        if(isPossible(time, k, mid)){
            ans= mid;
            e= mid-1;

        }else{
          s= mid+1;
        }
     mid= s+ (e-s)/2;

    }

    return ans;

}


int main(){
    vector<int> time ={2,1,5,6,2,3};
    int k=2;

    cout<<"the ans is  "<<painterProblem(time,k)<<endl;
}