#include<iostream>
#include<string>
using namespace std;

class User{
	int secret = 22;
	
public:
	string name = "default";
	void Message();     //declaration but defined outside
	void classMessage(){
		cout<<"Class is great, " << name << endl;
	}
	
	//setter
	void setSecret(int newSecret){
		secret = newSecret;
	}
	//getter 
	int getSecret(){
		return secret;
	}
};

//definition of function
void User :: Message(){
	cout<<"Messaged defined outside class with variable "<< name;
}


int main(){
	User sam;
	sam.name = "Sam";
	sam.classMessage();
	sam.setSecret(3443);
	cout<<sam.getSecret() << endl;
	
	User peeyush;
	peeyush.classMessage();
	
	User peter = sam;      //every property of sam is copied to peter
	cout<<peter.getSecret() << endl;
	

	return 0;
}
