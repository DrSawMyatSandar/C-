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
    if (a<b){
        if (a<c){
            cout << "a is the smallest";
        }
        else{
            cout << "c is the smallest";
        }
    }
    else
    {
        if(b<c){
            cout << "b is the smallest";
        }
        else{
            cout << "c is the smallest";
        }
    }
    return 0;
}//comments