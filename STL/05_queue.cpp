#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main(){

    queue<int> myQ;

    myQ.push(20);
    myQ.push(12);
    myQ.push(14);
    myQ.push(16);

    cout<<myQ.front()<<endl<<myQ.back() <<endl;

    myQ.pop();
    cout<<myQ.back()<<endl<<myQ.front()<<endl;

    //iterate through queue
    while(!myQ.empty()){
        cout << " "<< myQ.front();
        myQ.pop();
    }


    //PRIORITY QUEUE --> Highest Order will be at top and priority is given to it
    priority_queue<int> myPq;
    myPq.push(10);
    myPq.push(12);
    myPq.push(30);
    myPq.push(59);
    myPq.push(2);

    while(!myPq.empty()){
        cout << " "<< myPq.top();
        myPq.pop();
    }

myPq.empty

    return 0;
}


 