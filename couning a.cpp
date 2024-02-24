#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	char ch;
	int counter = 0;
	ifstream myfile;
	myfile.open("read.txt");
	if(myfile.is_open())
	{
	while(!myfile.eof())
	{
	myfile.get(ch);
	if(ch=='a')
	{
		counter++;
	}
	}
	cout<<"Number of times a appeared in the file is:"<<counter;
	myfile.close();
}
else
		cout<<"Unable to open the file.";
return 0;
}

