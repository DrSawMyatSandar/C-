//example30_SimpleCalculator
#include <iostream>
using namespace std;
int main (){
	
	int firstNumber;
	int secondNumber;
	char choice;
	cout<<"Enter a.addition \t s.subtraction \t m.multiplication \t d.division:"<<endl;
	cin>>choice;
	
	cout<<"Enter first number:"<<endl;
	cin>>firstNumber;
	cout<<"Enter second number:"<<endl;
	cin>>secondNumber;
	
	if (choice=='a' || choice=='A'){
		cout<<"Addition is:"<<firstNumber+secondNumber;
	}
	else if (choice=='s' || choice=='S'){
		cout<<"Subtraction is:"<<firstNumber-secondNumber;
	}
	else if (choice=='m' || choice=='M'){
		cout<<"Multiplication is:"<<firstNumber*secondNumber;
	}
	else if (choice=='d' || choice=='D'){
		cout<<"Division is:"<<firstNumber/secondNumber;
	}
	else{
		cout<<"Invalid Selection";
	}
	return 0;
}