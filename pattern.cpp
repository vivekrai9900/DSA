#include<iostream>
using namespace std;
int main(){
    // int n=3;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n+1){
    //         cout<< n-j+1 <<"";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    // int n;
    // cin>>n;
    // int i=0;
    // int count=1;
    // while(i<n){
    //     int j=0;
    //     while(j<=i){
    //         cout<< count <<" " <<"";
    //         count++;
    //         j++;
    //     }
    //     count-=i;
    //     cout<<endl;
    //     i++;
    // }

int n;
cout<<"enter the value of n  "<<endl;
cin>>n;
// printing 1st triangle
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }


    // printing star triangle
    int k=1;
    while(k<=i-1){
        cout<<"*";
        k++;
    }


    // print 2nd star tri
     int l=1;
    while(l<=i-1){
        cout<<"*";
        l++;
    }

    // printing 3rd triangle
    int m=1;
    while(m<=n-i+1){
        int st=n-m-i+2;
        cout<<st;
        m++;
    }




    cout<<endl;
   i=i+1;
}



    
}




