#include<iostream>

using namespace std;

int lifeUp(){
	int life = 3;
//	return life++;	
	return ++life;
}

int main(){
	int life = 3;
	cout<<"Your starting game life is: "<<life<<endl;

	life = lifeUp();
	printf("Your updated game life is %d\n", life);
	
	life = lifeUp();
	printf("Your updated game life is %d\n", life);

	return 0;
}
