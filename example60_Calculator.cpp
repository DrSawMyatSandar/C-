//example60_Calcultor
#include <iostream>
using namespace std;

double add(double firstNumber,double secondNumber){
	return firstNumber+secondNumber;
}
double sub(double firstNumber,double secondNumber){
	return firstNumber-secondNumber;
}
double mul(double firstNumber,double secondNumber){
	return firstNumber*secondNumber;
}
double div(double firstNumber,double secondNumber){
	return firstNumber/secondNumber;
}
int main(){
	int op;
	double firstNumber;
	double secondNumber;
	cout<<"Enter your operation 
	(1 Addition \t 2 Subtraction \t 
	3 Multiplication \t 4 Division\n";
	cin>>op;
	cout<<"Enter first number"<<endl;
	cin>>firstNumber;
	cout<<"Enter second number"<<endl;
	cin>>secondNumber;
	
	if (op==1){
		cout<<"Addition is: "<<add(firstNumber,secondNumber);
	}
	else if (op==2){
		cout<<"Subtraction is: "<<sub(firstNumber,secondNumber);	
	}
	else if (op==3){
		cout<<"Multiplication is: "<<mul(firstNumber,secondNumber);	
	}
	else if (op==4){
		cout<<"Division is: "<<div(firstNumber,secondNumber);	
	}	
	else{
		cout<<"Invalid";
	}	
	return 0;
}