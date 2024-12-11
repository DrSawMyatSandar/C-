//example28_SmallestNumber
#include <iostream>
using namespace std;
int main (){
	int num1;
	int num2;
	int num3;
	cout<<"Enter number 1:"<<endl;
	cin>>num1;
	cout<<"Enter number 2:"<<endl;
	cin>>num2;
	cout<<"Enter number 3:"<<endl;
	cin>>num3;
	
	if (num1<num2 && num1<num3)
	{
		cout<<"number 1 is the smallest="<<num1<<endl;
	}
	else if (num2<num1 && num2<num3)
	{
		cout<<"number 2 is the smallest="<<num2<<endl;
	}
	else{
		cout<<"number 3 is the smallest="<<num3<<endl;	
	}
  return 0;
}