#include<iostream>
#include<fstream>
using namespace std;
int main (){

ofstream myfile;
string str ;
myfile.open("read.txt");
myfile<<str;
myfile.close();
return 0;
}
