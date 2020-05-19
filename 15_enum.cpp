#include<iostream>
using namespace std;

//enum MsOffice{
//	BOLD = 5,
//	ITALICS,
//	UNDERLINE,
//	COSSED
//};

enum MsOffice{
	BOLD = 5,
	ITALICS = 0,
	UNDERLINE = 2,
	COSSED
};


int main(){

	int myAttributes = UNDERLINE;
	
	cout<<myAttributes <<endl;
	
	
	return 0;
	
}
