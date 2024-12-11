#include <iostream>
using namespace std;
int main(){
	int x;
	int y;
	
	cout<<"Enter a number x:";
	cin>>x;
	y=x%2;
	
	if (y==0)
	{
		cout<<"x is even";		
	}
	else
	{
		cout<<"x is odd";
	}
}

