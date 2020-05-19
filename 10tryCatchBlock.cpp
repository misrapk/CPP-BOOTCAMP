// #try catch


#include<iostream>
using namespace std;

int main(){

//	int call_api = 1;
	float call_api = 2.0;
	//if u think that your code may get error
	// then use try catch

	try{

		cout<<"\nTrying to use API value\n";
		cout<<"\nDid some testing with api vlaue";
		
		throw call_api;

		cout<<"no code execute after return and throw.";

	} catch(int x){
		//error message
		cout<<"\nInteger exception handled";
	} catch(float f){
		cout<<"\nFloat exception handled";
	}

	cout<<"\nKeep on Moving with rest of Code\n";


	return 0;

}
