#include <iostream>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	Car carObj1;
	carObj1.brand="Toyota";
	carObj1.model="Rush";
	carObj1.year=2019;	
	
	Car carObj2;
	carObj2.brand="Suzuki";
	carObj2.model="Swift";
	carObj2.year=2010;	
	
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
	cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
	return 0;
}