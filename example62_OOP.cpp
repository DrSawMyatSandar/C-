#include <iostream>
using namespace std;

class Pet{
	public: 
		int age;
		string petName;
		string petType;
};

int main(){
	Pet myPet;
	myPet.petType="Cat";
	myPet.age=10;
	myPet.petName="Princess";
	
	cout<<"My Pet Name is "<<myPet.petName<<endl;
	cout<<"She is "<<myPet.age<<" years old."<<endl;
	cout<<"It is a "<<myPet.petType<<endl;
	return 0;
}

