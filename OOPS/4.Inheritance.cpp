#include<iostream>
#include<string>
using namespace std;

class Money{
	public:
		void getMoney(){
			puts("GOt USd");
		}
	
};

class Man{
	string _name;
	int _age;
	Man(){}    //default constructor
protected:
	//override the constructor
	Man(const string &name, const int &age): _name(name), _age(age){}

	void run(){
		puts("I can run eaisly.");
	}
public:
	void name() const;
};


void Man::name() const{
	cout<<"My name is : "<<_name<< "and age is "<<_age<<endl;
}

//derived classs
class Superman : public Man, public Money{
	bool fly;
public:
	Superman(string name) :  Man(name, 26){}		//constructor
	void run(){
		puts("I can run faster and easy peasy");
		
	}
};

class Spiderman : public Man{
	bool fly;
public:
	Spiderman(string name) :  Man(name, 19){}		//constructor
	void run(){
		puts("SPiderMan can run faster and easy peasy");
		
	}
};







int main(){
	Superman s1("SupermanHEre");
	s1.name();
	s1.getMoney();
	
	Spiderman s2("Peter");
	s2.run();

	return 0;
	
}
