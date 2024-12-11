//example46
#include <iostream>
using namespace std;
int main(){	
	string letters[2][4]={
	{"A","B","C","D"},
	{"E","F","G","H"}	
	};
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<4;col++){
			cout<<letters[row][col]<<"\n";			
		}
	}
	return 0;		
}