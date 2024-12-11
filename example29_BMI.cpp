//example29_BMI
#include <iostream>
using namespace std;
int main (){
	double weight;
	double height;
	double bmi;
	cout<<"Enter your weight in lb:"<<endl;
	cin>>weight;
	cout<<"Enter your height in inches:"<<endl;
	cin>>height;
	bmi=(weight*703)/(height*height);
	cout<<bmi<<endl;
	if (bmi<18)
	{
		cout<<"Under weight:";	
	}
	else if (bmi>=18 && bmi<25){
		cout<<"Normal";
	}
	else if (bmi>=25 && bmi<30){
		cout<<"Over weight";	
	}
	else if (bmi>=30 && bmi<35){
		cout<<"Obese";	
	}
	else{
		cout<<"Extremely Obese";
	}
  return 0;
}