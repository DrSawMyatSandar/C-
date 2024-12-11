#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    if (a>b){
        if (a>c){
            cout << "a is the largest";
        }
        else{
        cout << "c is the largest.";
        }
    }
    else{
        if (b>c){
        cout << "b is the largest";
        }
        else{
        cout << "c is the largest";
        }
    }

    return 0;
}