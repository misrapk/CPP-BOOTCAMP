#include<iostream>
using namespace std;

struct User{
	const int uId;
	const char *name;
	const char *email;
	int courseCount;
};


int main(){

	User roy = {001, "Roy", "roy@gmail.com",2};
	User megha = {002, "Megha", "jainmegha@gmail.com",2};
	
	User *r = &roy;     //m is reference of megha
	/*here 'r' and 'roy' are exactly same */
	r->courseCount =12;
	cout<<r->courseCount<<endl;
	
	
	cout<<roy.email<<endl;
	cout<<megha.courseCount<<endl;
	
	megha.courseCount = 5;   //update the info
	
	cout<<megha.courseCount<<endl;
	return 0;
}
