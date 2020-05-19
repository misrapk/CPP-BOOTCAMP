#include<iostream>
#include<string>
using namespace std;

string apiCall(){
	return "got some data from this";
}

int main(){
	string response = apiCall();
//	auto will automatically define the data type
//	auto response = apiCall();
	
	cout<<"API CALL VALUE: "<<response;
	
	return 0;
}
