#include <iostream>
using namespace std;
class MyClass{
	public:
		void myMethod();
};
// Method/function definition outside the class

void MyClass::myMethod(){
	cout<<"Hello";
}
		
int main(){
	
	MyClass myobj;
	myobj.myMethod();
	return 0;
}