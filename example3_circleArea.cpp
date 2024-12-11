#include<iostream>
using namespace std;
int main(){
    float radius;
    float circlearea;
    cout << "Enter radius:";
    cin >> radius;
    circlearea = 3.142 * radius * radius;
    cout << circlearea;
    return 0;
}