//example49_function
#include <iostream>
using namespace std;

void my_function(string fname,int age){
	cout<<fname<<" is "<<age<<endl;
}

int main()
{
	my_function("John",23);
	my_function("Rita",13);
	my_function("Rose",33);
	
	return 0;
}
