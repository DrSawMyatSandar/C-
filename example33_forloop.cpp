#include <iostream>
using namespace std;
int main()
{
	cout<<"Loop 1"<<endl;
	
	for (int i=0;i<5;i++){
		cout<<i<<endl;
	}
	
	cout<<"Loop 2"<<endl;
	for (int j=0;j<10;j=j+2){
		cout<<j<<endl;
	}
	
	return 0;
}