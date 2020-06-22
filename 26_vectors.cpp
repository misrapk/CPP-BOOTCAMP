#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct corners{
    float a, b, c, d;
};

//override
ostream& operator<<(ostream& stream , const corners& corner){
    stream<< corner.a <<" "<< corner.b << " " << corner.c <<" " << corner.d;

    return stream;
}


int main(){
    vector<int> inty;
    
    inty.push_back(1);
    inty.push_back(2);
    inty.push_back(4);
    inty.push_back(23);

    for(auto i = inty.begin(); i<inty.end(); ++i){
        cout<< *i <<endl;
    }
    
    vector<corners> corner;
    corner.push_back({1,2,3,4});
    corner.push_back({5,6,7,8});

    for (int i = 0; i < corner.size(); ++i)
    {
        cout << corner[i] <<endl;
    }
    

    return 0;
}