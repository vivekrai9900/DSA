#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool isPalindrome(char s[], int n){

   int st=0;
   int e=n-1;
   while(st<=e){
    if(toLowerCase(s[st])!=toLowerCase(s[e])){
        return false;
    }else{
        st++;
        e--;
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

    // cout<<ans;

    if(ans){
        cout<<"it is  a palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
    return 0;

}