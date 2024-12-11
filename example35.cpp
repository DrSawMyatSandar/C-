#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int myNum[5]={10,20,30,40,50};
		for(int i:myNum){
		cout<<i<<endl;
	}
	return 0;
}