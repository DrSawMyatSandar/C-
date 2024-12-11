//example70
#include <iostream>
using namespace std;
class MyClass{
	public:int x;
	private: int y;	
};

int main(){
	MyClass myObj;
	myObj.x=25;//access
	myObj.y=50;//cannot acces - private
	return 0
}
