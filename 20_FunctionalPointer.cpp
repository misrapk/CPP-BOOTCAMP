#include<iostream>
using namespace std;


int getTwo(){
	return 2;
}

void fun(){
	puts("I am function");
}

int main(){
	
	//create pointer 
	void (*pointsTofun)() = fun;    //it will not run
	/* here pointsTofun is pointing to memory
	location of ' fun' */
	
	//to run use dereferencing
	pointsTofun();
	(*pointsTofun)();
	
	int got = getTwo();
	return 0;
}

