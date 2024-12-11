//exercise22
#include <iostream>
using namespace std;

int main() {
  int x = 5;
  x &= 3;//AND
  cout << x<<endl;//1
 //5  = 0101
 //3  = 0011
 //5&3= 0001 = 1
  
  int y=5;
  y |=3;//OR
  cout<<y<<endl;//7
  //5   = 0101
  //3   = 0011
  //5&y = 0111=7

  int z = 5;
  z ^= 3;//XOR - same=0, different=1
  cout << z << endl;//6
  //5   = 0101
  //3   = 0011
  //5^3 = 0110=6

  return 0;
}
