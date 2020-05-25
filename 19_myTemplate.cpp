#include<iostream>
#include "myHeader.h"
using namespace std;

void lifeUp(int &life){
	++life;
}

//template<typename> T ;    //template
//
//T addme(T a, T b){
//	return a+b;
//}


int main(){
	int life= 3;
	lifeUp(life);
	cout<<life<<endl;
	
	int y1 = 4;
	int y2 = 2;
	float v3 = 5.2;
	float v4 = 3.2;
	
	cout<<addme(v3, v4);
}
