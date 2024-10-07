#include<iostream>
using namespace std;

bool isPalindrome(char s[], int n){

    for(int i=0; i<=(n/2);i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }

    return true;
    


}

int size(char s[]){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;

    }

    return count;
}


int main(){

    char letter[20];
    cout<<"enter the character you want to check: "<<endl;
    cin>>letter;

    int n= size(letter);

    bool ans= isPalindrome(letter,n);

    if(ans==0){
        cout<<"it is not a palindrome";
    }else{
        cout<<"it is a palindrome";
    }
    return 0;

}