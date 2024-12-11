//example57-overload
#include <iostream>
using namespace std;

int plusFunc(int x, int y){
	return x+y;
}
double plusFunc(double x,double y){
	return x+y;
}

int main(){
	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(4.3, 6.26);
	cout<<"Integer Addition: "<<myNum1<<endl;
	cout<<"Double Addition:"<<myNum2<<endl;
	return 0;
}
