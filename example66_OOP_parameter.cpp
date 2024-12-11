//example66_OOP_Parameter
#include <iostream>
using namespace std;

class Car{
	public:
		int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
	return maxSpeed;
}

int main(){
	Car myobj;
	cout<<myobj.speed(200);
	return 0;
}