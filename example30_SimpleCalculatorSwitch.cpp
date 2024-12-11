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
	
	switch(choice)
	{
		case 'a': cout<<"Addition is:"<<firstNumber+secondNumber;
	    break;
		case 's': cout<<"Subtraction is:"<<firstNumber-secondNumber;
	    break;
		case 'm': cout<<"Multiplication is:"<<firstNumber*secondNumber;
	    break;
		case 'd': cout<<"Division is:"<<firstNumber/secondNumber;
	    break;	
		default: cout<<"Invalid";
		break;
	}
	return 0;
}