/* variadic is --> ...
*/
#include<bits/stdc++.h>

using namespace std;

//define a funciton that take any type of argument and print
template <typename T>

//for one argument
void func(T t){
	cout << "One Funciotn " << t << endl;
}

template<typename T, typename... args>  //variadic

//for multiple output
void func(T t, args...  a)   //args take multiple input
{
	cout << "Two funciton " << t << endl;
	func(a...);
}



int main(){
	
	string myName = "peeyush";
	
	func(myName);
	func(1, 2, 3.2, 6.5, myName);
	return 0;
}
