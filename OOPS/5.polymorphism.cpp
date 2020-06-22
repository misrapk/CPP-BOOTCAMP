//polymorphism

#include<iostream>
#include<string>

using namespace std;

class One{
public:
	virtual void intro(){
		cout<<"Hello I am classs ONe\n";
	}
};

//derived
class Two : public One{
public:
	void intro(){
		cout<<"Hello I am class Two\n";
	}
	
};

class Three: public One{
public:
	void intro(){
		cout<<"Hello I am class Three\n";
	}
};


int main(){
//	One a;
//	Two b;
//	Three c;
//	a.intro();
//	b.intro();
//	c.intro();
	
	One a;
	Two b ; 
	Three c;
	
	
	
	a = &b;
	a->intro();
	
	return 0;
}
