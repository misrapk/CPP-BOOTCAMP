#include<iostream>
using namespace std;


int main(){
	int life;
	life = 5;

	int card;
	card = 40;
	int myCard = card;
	
	//pointers must be declare first
	int *myP;    //pointer intialized
	myP = &card;

	myCard = *myP;    //Pointer dereference
	
	printf("Value of card is : %d\n", myCard);
	printf("Value of card is : %d\n", myP);
	return 0;
}
