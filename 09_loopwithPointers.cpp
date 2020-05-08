//loop with pointers

#include<iostream>
using namespace std;

int main(){
	
	//array of characters --> string
	char myString[] = "Peeyush";
	
	char myName [] = {'P','e','e','y','u','s','h',0};
	
	printf("My name is : %s\n", myString);
	
	//using second loop
	cout<<"second string syntax\n"<<endl;
	for (int i =0; myName[i] !=0; i++){
		printf("characer is : %c \n", myName[i]);
	}
	
	//we can also do this with myString
	for (int i =0; myString[i] !=0; i++){
		printf("characer is : %c \n", myString[i]);
	}
	
	cout<<"USING POINTER\n";
	
	for(char *cp = myName; *cp !=0; cp++){
		cout<<"Character is : "<<*cp<<endl;
	}
	
	
	return 0;
}
