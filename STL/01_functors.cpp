//functors --> manage state parameterised
#include<iostream>
#include<string>
using namespace std;

class MyFloat{
    float flt;
public:
    MyFloat(){
        flt = 0.01;
    }
    void getValue(){
        cout<< flt <<endl;
    }

    //overload a function   --> these are functors
    void operator () (float v){
        flt += v;
    }

};

int main(){
    MyFloat floaty;
    floaty.getValue();

    floaty(0.1);
    floaty.getValue();
    return 0;
}