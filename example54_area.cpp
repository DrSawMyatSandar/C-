//example54_area
#include <iostream>
using namespace std;
float circleArea(int radius){
	return 3.142*radius*radius;
}
float recArea(int width,int length){
	return width*length;
}
float triArea(int base,int height){
	return 0.5*base*height;
}
float cylArea(float radius,int height){
	return 3.142*radius*radius*height;
}
int main(){
	cout<<"Circle Area is:"<<circleArea(5)<<endl;
	cout<<"Rectanble Area is:"<<recArea(10,20)<<endl;
	cout<<"Triangle Area is:"<<triArea(15,20)<<endl;
	cout<<"Cylindar Area is:"<<cylArea(10,5)<<endl;
	return 0;  	
}