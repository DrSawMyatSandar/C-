//example73_inheritance
#include <iostream>
using namespace std;

//Base class - parent class
class Vehicle{
	public: 
		void drive(){
			cout<<"Vroom Vroom"<<endl;
		}
};
//Derive class - child class
class Car:public Vehicle{
	public:
		void color(){
			cout<<"Blue"<<endl;
		}
};

int main(){
	Car mycar;
	mycar.drive();
	mycar.color();
	return 0;
}