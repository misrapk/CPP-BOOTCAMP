#include<iostream>
#include "string"
using namespace std;

int main(){
	string myColor;
	cout<<"Enter you fav: \n";
	getline(cin, myColor);
	cout<<"HEy " << myColor<< " is my fav color too"<<endl;
	
	return 0;
	
}
