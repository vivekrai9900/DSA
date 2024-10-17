#include<iostream>
using namespace std;

int main(){
    int mike[50]={0};
    int jake[50]={0};

    int m, j;

    cout << "enter the jake number" << endl;
    cin >> j;
    cout << "enter the mike number" << endl;
    cin >> m;

    for(int i = 0; i < m; i++){
        mike[i] = i + 1;
    }

    for(int i = 0; i < j; i++){
        jake[i] = i + 1;
    }

    int count = 0;
    for(int i = 0; i < m; i++){
        for(int k = 0; k < j; k++){
            if((mike[i] + jake[k]) % 2 == 0){  // Corrected condition
                count++;
                cout << "inside the loop count " << count << endl;
            }
        }
    }

    cout << count << endl;

    return 0;
}
