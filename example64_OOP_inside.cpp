#include <iostream>
using namespace std;
class MyClass{
	public:
		void myMethod(){// Method/function defined inside the class
			cout<<"Hello";
		}
};

int main(){
	
	MyClass myobj;
	myobj.myMethod();
	return 0;
}