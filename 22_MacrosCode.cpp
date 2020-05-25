#include<iostream>
#include<string>

#define end return 0
#define endmessage cout<<"End message is here\n"

#define console_log(a) cout << a << endl



using namespace std;


int main(){
	int a =4; 
//	cout<<a<<endl;    //replace with macro

	console_log(a);
	string name = "Peeyush";
	console_log(name);
	
	
	endmessage;
	
	end;
	
	
}
