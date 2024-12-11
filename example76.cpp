//example76
#include <iostream>
using namespace std;
//Base class
class Animal{
	public:
		void animalSound(){
			cout<<"The animal makes a sound"<<endl;			
		}
};
//Derive class
class Cat:public Animal{
	public:
		void animalSound(){
			cout<<"Meow Meow"<<endl;
		}
};

class Dog:public Animal{
	public:
		void animalSound(){
			cout<<"Woof Woof"<<endl;
		}
};

int main(){
	Animal myAnimal;
	Cat myCat;
	Dog myDog;
	
	myAnimal.animalSound();
	myCat.animalSound();
	myDog.animalSound();
	
	return 0;
}
