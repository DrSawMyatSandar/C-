#include<iostream>
using namespace std;
int main(){
    float base;
    float height;
    float triangleArea;
    cout << "Enter base:";
    cin >> base;
    cout << "Enter height:";
    cin >> height;

    triangleArea = 0.5 * base * height;
    cout << triangleArea;
    return 0;
}