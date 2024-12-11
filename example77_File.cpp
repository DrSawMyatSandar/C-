//example77_WriteFile
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//create a file
	ofstream MyFile("smsd.txt");
	//write
	MyFile<<"Saw Myat Sandar \t Software Engineer";
	//clode the file
	MyFile.close();
}