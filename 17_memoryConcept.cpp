#include<iostream>
using namespace std;

struct User{
	const int id;
	int age;

	User () : id(001), age(22){}
	
};

int main(){
	//stack memory
	//automatically allocate memory
	int score = 100;
	User Spider;

	//heap memory
	//allocation of memory
	int* heap_score = new int;
	*heap_score = 200;

	User* superman = new User();


	//delete the allocated memory
	delete heap_score;
	delete superman;

	return 0;
}
