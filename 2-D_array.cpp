#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    int row= arr.size();
    int col= arr[0].size();

    cout<<"row is "<<row <<" and col is "<<col<<endl;

    return 0;
}