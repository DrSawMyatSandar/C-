//example23
#include <iostream>
using namespace std;
 
int main (){
  int x = 1000;//decimal - binary = 1111101000
  int z;
  int r;

  //left shift operation
  z = x << 2;//1110100000

  //Displaying the result
  cout<<"z = "<<z<<endl;
  
  //right shift operation
  r = x >> 2;
  cout<<"r="<<r;//11111010 - 250
  return 0;
  
}