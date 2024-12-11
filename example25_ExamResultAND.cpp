//example25
#include <iostream>
using namespace std;
int main (){
	int myan;
	int eng;
	int math;
	cout<<"Enter myanmar mark:"<<endl;
	cin>>myan;
	cout<<"Enter english mark:"<<endl;
	cin>>eng;
	cout<<"Enter mathematics mark:"<<endl;
	cin>>math;
	if (myan>=40 && eng>=40 && math>=40)
	{
		cout<<"Pass";
	}
	else
	{
		cout<<"Fail";
	}
  return 0;
}