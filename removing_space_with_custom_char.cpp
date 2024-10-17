#include<bits/stdc++.h>

using namespace std;

string custom_sentance(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s[i]='@40';
        }
    }

    return s;
}

int main(){
    string s;
    cout<<"enter the sentance: "<<endl;
    getline(cin,s);

    cout<<"the sentance after change is : "<<custom_sentance(s)<<endl;

    return 0;


}