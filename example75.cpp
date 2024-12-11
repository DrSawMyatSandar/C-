//example75 - Access Specifier in Inheritance
#include <iostream>
using namespace std;

class Employee{
	protected: int salary;
};
//Derive class
class Programmer:public Employee{
	public:
		int bonus;
		void setSalary(int s){
			salary=s;
		}
		int getSalary(){
			return salary;
		}
};

int main(){
	Programmer pg;
	pg.setSalary(50000);
	pg.bonus=15000;
	cout<<"Salar is:"<<pg.getSalary()<<endl;
	cout<<"Bonus is:"<<pg.bonus;
	return 0;
}