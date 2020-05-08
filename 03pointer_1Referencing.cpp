#include<iostream>
using namespace std;

int main(){

	int score = 200;
	int *myP = &score;

	printf("Value of score is : %d\n", score );
	printf("Value of pointer is : %p\n", myP);

	int &refScore = score;    //this is dereferencing
	refScore = 10000;    //this will also change the value of score
	
	printf("Value of score after dereferncing is : %d\n", score );
	printf("Value of pointer is : %p\n", myP);
	return 0;
}
