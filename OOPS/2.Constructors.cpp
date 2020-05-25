#include<iostream>
#include<string>
using namespace std;


class Phone{
	string _name = "";
	string _os = "";
	int _price = 0;
	
public:
	Phone();  //default constructor
	Phone(const string &name, const string &os, const int& price);  //parameter construcor
	Phone(const Phone & ); //copy constructor
//	
	//getter
	string getName(){
		return _os;
	}
	
//	//destructor
	~Phone();
};

Phone :: Phone() : _name(), _os("KitKat"), _price(){
	puts("Default construcor");
}


Phone :: Phone(const string &name, const string &os, const int& price) : _name(name), _os(os), _price(price){
	puts("This is parameter constructor.");
}

//for copy cosntructor
Phone :: Phone(const Phone & values){
	puts("Overwrite opy consturctor.");
	_name = values._name;
	_os = values._os;
	_price = values._price;
}


// for destructor
Phone :: ~Phone(){
	printf("Destructor called for %s\n.", _name.c_str());
}



int main(){
	
	Phone nokia1;
	cout<<nokia1.getName()<<endl;
	
	Phone OnePlus8("OnePlus 8", "AndroidP",  8999);
	cout<<OnePlus8.getName()<<endl;
	
	//copy
	Phone OnePlus8S = OnePlus8;
	cout<< OnePlus8S.getName()<<endl;
	
	//using copy constructor
	
}
