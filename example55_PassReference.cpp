//example55
#include <iostream>
using namespace std;

void swapNumber(int &x,int &y)//Pass Reference
{
	int z=x;
	x=y;
	y=z;
}
int main(){
	int firstNumber=10;
	int secondNumber=20;
	
	cout<<"Before Swap: "<<endl;
	cout<<firstNumber<<"\t"<<secondNumber<<endl;
	
	swapNumber(firstNumber,secondNumber);
	cout<<"After swap: "<<endl;
	cout<<firstNumber<<"\t"<<secondNumber<<endl;
	return 0;
}