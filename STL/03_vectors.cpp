//vectors part - II

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;




int main(){
    vector<int> nums; //initialisation
    vector<string> heroes {"Spiderman, Hulk, Iron Man, Nagraaj, Hanumaan"};   //initialisation

    //insertion
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(2);


    for (int i =0; i<5; i++){
        nums.push_back(i);
    }

    cout << nums.size() << " "<< nums.capacity() << endl << nums.max_size();

    cout << nums.empty() <<endl;

    for (auto i = nums.begin(); i!= nums.end(); ++i){
        cout << *i << " ";
    }
cout<<endl;
    vector<int> myV;
    myV.push_back(10);
    myV.push_back(6);
    myV.front() += myV.back();
    cout<<myV.front() << "\n";

    return 0;
}