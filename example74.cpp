//example74 - Multiple Inheritance
#include <iostream>
using namespace std;

//Base class
class MyClass{
public: 
		void myFunction(){
			cout<<"Parent Class."<<endl;
		}
};
class MyOtherClass{
	public:
		void myOtherFunction(){
			cout<<"Another Parent Class"<<endl;
		}
};
//Child Class
class MyChildClass:public MyClass, public MyOtherClass{
	
};

int main(){
	MyChildClass myobj;
	myobj.myFunction();
	myobj.myOtherFunction();
	return 0;
}