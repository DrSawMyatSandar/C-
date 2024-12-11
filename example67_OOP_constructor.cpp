//example67_OOP_Parameter
#include <iostream>
using namespace std;

class MyClass{
	public:
		//constructor - a special function - automatically call.
		MyClass(){
			cout<<"Hello";
		}
};

int main(){
	MyClass myc;
	return 0;
}