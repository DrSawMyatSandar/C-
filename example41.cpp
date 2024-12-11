//example41_DiamondShape
#include <iostream>
using namespace std;
int main(){
	int n,s,i,j;
	cout<<"Enter number of rows:";
	cin>>n;
	//pyramid
	for(i=1;i<=n;i++)
	{
		//for loop to put space
		for(s = i; s < n; s++)
		cout << " ";
		
		//for loop for displaying star
		for(j = 1; j <= i; j++)
		cout << "* ";
		// ending line after each row
		cout << "\n";
	}
	//reverse pyramid
	for(i = 1; i < n; i++)
	{
		for(s = 0; s < i; s++)
		cout << " ";
	
		for(j = n; j > i; j--)
		cout << "* ";
		// ending line after each row
		cout << "\n";
	}
	return 0;
}
