#include <iostream>
using namespace std;
int main()
{
	//outerloop
	for (int i=1;i<=3;++i){
		cout<<"Outer:"<<i<<endl;
		//inner loop
		for (int j=1;j<=3;++j){
			cout<<"Inner:"<<j<<endl;
		}
	}
	return 0;
}