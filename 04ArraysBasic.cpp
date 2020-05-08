#include<iostream>
using namespace std;

int main(){

	int arr[4] = {3,4,2,5};
	
	int arr2[4];
	arr2[0] = 9;
	arr2[1]=10;
	cout<<arr<<endl;

	*arr2 = 200;
	cout<<arr2[0]<<endl;
	
	cout<<arr2[1]<<endl;
	int *ap = arr2;
	ap++;	
	cout<<ap<<endl;
	cout<<arr[1]<<" "<<arr[0]<<endl;
	
	 
	return 0;
}
