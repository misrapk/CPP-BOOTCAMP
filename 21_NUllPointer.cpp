#include<iostream>

#define nullptr 0
using namespace std;

void printVal(int a)
{
	printf("INteger value is %d\n.", a);
}
//funciton overloading
void printVal(double a)
{
	printf("double value is %d\n", a);
}
void printVal(int * a)
{
	printf("Pointer value is %d\n.", a);
}



int main(){
	printVal(5.3);
	printVal(nullptr);    //#define null first ...line 3
	
	return 0;
}
