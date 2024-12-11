//example53_function
#include <iostream>
using namespace std;

int my_function(int x, int y){
	return x+y;
}

int main(){
	cout<<my_function(3,11)<<endl;
	int z=my_function(5,6);
	cout<<z<<endl;
	return 0;  	
}