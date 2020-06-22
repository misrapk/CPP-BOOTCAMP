#include<iostream>
#include<string>
using namespace std;
//without move Semantics
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b=temp;
}

//using moveSemantics
void swapM(int &a, int &b){
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

int main(){
    int a = 8;
    int b =2;
    

    cout<<"Before Swap : a and b are: "<<a<<" "<<b<<endl;
    // swap(a,b);
    swapM(a,b);
    cout<<"After Swap : a and b are: "<<a<<" "<<b<<endl;

    return 0;
}