#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a,b,c,x1,x2,discriminant,rp,ip;
	cout<<"Enter coefficients a:";
	cin>>a;
	cout<<"Enter coefficients b:";
	cin>>b;
	cout<<"Enter coefficients c:";
	cin>>c;

	discriminant=b*b-4*a*c;
	
	if (discriminant>0){
		x1=(-b+sqrt(discriminant))/(2*a);
		x2=(-b-sqrt(discriminant))/(2*a);
		cout<<"Roots are real and different."<<endl;
		cout<<"x1="<<x1<<endl;//endline - enter to new line
		cout<<"x2="<<x2<<endl;		
	}
	
	else if (discriminant==0){
		x1=-b/(2*a);
		cout<<"Roots are real and same."<<endl;
		cout<<"x1=x2="<<x1<<endl;
	}
	else{
		rp=-b/(2*a);
		ip=sqrt(-discriminant)/(2*a);
		cout<<"Roots are complex and different."<<endl;
		cout<<"x1="<<rp<<"+"<<ip<<"i"<<endl;
		cout<<"x2="<<rp<<"-"<<ip<<"i"<<endl;
		//y=x2-4x+5 #1,-4,5 # 2 1
		
	}
}