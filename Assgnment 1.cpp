/* assignment
accepts rate from 1 to 5 
for every other print(please cheoose between 1 and 4)
*/
#include<iostream>
using namespace std;

int main(){
	int rating;
	puts("Enter the rating: \n");
	cin>>rating;
	
	if(rating ==5){
		puts("5 star rated");
	}else if(rating ==4){
		puts("4star rating");
	}
	else if(rating ==3){
		puts ("3 star rated");
	}
	else if(rating == 2 or rating == 1){
		puts("Either 3 or rg");
}
	else{
		puts("choose between 1 and 5\n");
	}
	
	return 0;
}
