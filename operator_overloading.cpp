#include<iostream>
using namespace std;

class A {

    public:
      int a;
      int b;

    void operator+ (A &obj){
        int val1= this->a;
        int val2= obj.a;

        cout<< "the ans is "<< val1- val2<< endl;
        
    } 
};


int main(){

    A obj1, obj2;

    obj1.a=4;
    obj2.a=7;

    obj1 + obj2;
}

