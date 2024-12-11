#include <iostream>
using namespace std;
int main(){
	int i, fact=1, num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	
	for (i=1; i<=num; i++)
	{	
		fact=fact*i;
	}
	cout<<"Factorial number for "<<num <<" is "<<fact;
	return 0;
}