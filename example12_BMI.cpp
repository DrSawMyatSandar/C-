#include <iostream>
using namespace std;
int main(){
	float weight;
	float height;
	float bmi;
	cout<<"Enter weight (lb):";
	cin>>weight;
	cout<<"Enter height (in):";
	cin>>height;

	bmi=(weight*703)/(height*height);
	cout<<bmi;

}