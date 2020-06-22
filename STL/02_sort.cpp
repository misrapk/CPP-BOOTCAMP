// STL : sort function

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int num [10] = {3, 2,1,4,2,3,7,5,8,9};  //just call it iterator not array

    cout<< "Unsorted Values: "<<endl;
    for(int n : num){
        cout<<n<<" ";
    } cout<<endl;

    sort(num, num+10);   //it uses quick sort algo and also track the optimised if not optimised then it switches to heap sort
    // sort_heap(num, num+10);

    cout<<"Sorted Values: "<<endl;
    for(int n : num){
        cout<<n<<" ";
    }
    return 0;
}