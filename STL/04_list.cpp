#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main(){
    
    list<int> myList;

    //insertion
    for(int i =2; i<=12; i++){
        myList.push_back(i*2);
    }

    //check front;
    cout<<myList.front()<<endl;

    //check back
    cout<<myList.back()<<endl;

    //removing elelment
    myList.pop_back();

    //reverse the entire list;
    myList.reverse();


    for(auto i : myList){
        cout<< i<<" ";
    }


    return 0;
}