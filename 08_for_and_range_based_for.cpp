#include<iostream>
using namespace std;


int main(){
	
	int myNum[] = {2, 4, 6, 8, 9};
	
	for(int i =0; i<5 ;i++ ){
		
		printf("My %dth number is : %d\n", i+1, myNum[i]);
		
	}
	
	cout<<"move into for each loop"<<endl;
	
	//for each
	//valid in C++ 14 version
	for(int i : myNum){
		cout<<i<<endl;
		
	}
	
	return 0;
}
