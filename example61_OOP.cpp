//example61_OOP
#include <iostream>
using namespace std;
class MyClass{
	public:
		int myNum;
		string myString;
};

int main(){
	
	MyClass aa;
	aa.myString="Hello, My name is john and age is:";
	aa.myNum=15;
	
	cout<<aa.myString;
	cout<<aa.myNum;
	
	return 0;
	
}