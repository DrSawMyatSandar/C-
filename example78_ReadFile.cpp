//example78_ReadFile

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//Create a text string
	string myText;
	//Read 
	ifstream MyReadFile("smsd.txt");
	//while loop
	while(getline(MyReadFile,myText))
	{
		cout<<myText;
	}
	MyReadFile.close();
}