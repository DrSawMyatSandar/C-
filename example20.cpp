//exercise20
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 2;

    cout << "Addition:" << a + b << endl;
    cout << "Subtraction:" << a - b << endl;
    cout << "Multiplication:" << a * b << endl;
    cout << "Division:" << a / b << endl;
    cout << "Modulus:" << a % b << endl;

    a++;
    cout << "Increment of a 1st Time:" << a + b<<endl;//8
    a--;
    cout << "Decrement of a 2nd Time:" << a + b<<endl;//7
    return 0;


    
}