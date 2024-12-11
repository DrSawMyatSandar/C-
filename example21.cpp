//exercise21
#include <iostream>
using namespace std;
int main(){

    int x = 5;
    cout << x<<endl;//5

    int a=2;
    a += x;
    cout << a << endl;//7

    int b=10;
    b -= x;
    cout << b << endl;//5

    int c=4;
    c *= x;
    cout << c << endl;//20

    int d = 15;
    d /= x;
    cout << d << endl;//

    int e = 17;
    e %= x;
    cout << e << endl;//

    return 0;
}