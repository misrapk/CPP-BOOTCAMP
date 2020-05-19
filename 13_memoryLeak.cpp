//memory leak
#include<iostream>
using namespace std;

int main(){
	
	int *myP;
	/* //bad way of writing:
	
	myP = new int [100];     //pointer referencing to array having 100 values
	cout<<"memory space allocated\n";
	*/
	//write in try catch block
	try{
		myP = new int [1000];
		cout<<"Memory space allocated\n";
	} catch(...){
		cout<<"Failed to allocate memory\n";
	}
	
	delete [] myP;
	
	//delete the memory
	delete [] myP;
	
	return 0;
}

