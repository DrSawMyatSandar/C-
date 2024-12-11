//example72
#include <iostream>
using namespace std;

class CircleArea{
	private: 
	double radius;
	double area;
	   public:
	   	void set(double r){
			   radius=r;
			   area=3.14*radius*radius;
		   }	
		double get(){
			   return area;
		   }
};
int main(){
	CircleArea c;
	c.set(3.5);
	cout<<c.get();
	return 0;
}