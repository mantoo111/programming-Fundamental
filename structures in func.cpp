#include<iostream>
#include<string.h>
using namespace std;
struct person{
	string name;
	int age;
	int salary;
};
void display(person);
int main(){

person p1;
cout<<"enter  name ";
cin>>p1.name;
cout<<"enter the  age ";
cin>>p1.age;
cout<<"enter salary ";
cin>>p1.salary;
display(p1);
}
void display(person p1)
{
	cout<<p1.name<<endl;
	cout<<p1.age<<endl;
	cout<<p1.salary;
}

