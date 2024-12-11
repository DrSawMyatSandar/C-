//example45
#include <iostream>
using namespace std;
int main(){	
	int myNumbers[6]={10,20,30,40,50,90};
	int arraySize=sizeof(myNumbers);
	
	// 1 index - 4 byte = 6*4=24
	
	cout<<arraySize;//24
	return 0;		
}