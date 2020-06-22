#include<iostream>
#include<string>

using namespace std;

int main(){

    []{cout<<"HELLO I'm Lambda\n";}();

    //to return
    [](){return 0;};

    auto sum = [](auto a, auto b){return a+b;};

    cout<<"SUm of 2 and 4 is : "<<sum(2,4)<<endl;

    string a = "ABC";
    string b = "Def";
    cout<<"Sum of string a and b: "<<sum(a,b)<<endl;

    return 0;
}
