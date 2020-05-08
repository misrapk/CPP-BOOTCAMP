#include<iostream>
using namespace std;


int main(){
	
	int myNumbers[] = {6, 7, 4, 2, 6, 8, 2, 1, 9};
	
	int i =8;
	
	
//	while(i < 9){
//		if (i==3){
//			i++;
//			cout<<"skip this"<<endl;
//			continue;
//			
//		}
//		
//		cout<<"Current element  is : "<<myNumbers[i]<<endl;
//		i++;
//	} 
	
	
	/*do while*/
	do{
		cout<<"Curent number is : "<<myNumbers[i]<<endl;
		i++;
	}while(i < 9);
	
	cout<<"outside loop"<<endl;
	
	
	
	return 0;
}
