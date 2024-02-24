#include<iostream>
using namespace std;
struct student
{
	string name;
	int roll;
	int age;
	string gender;
	int clas;
};
void input(student s1);
void display(student s1);

int main()
{
student p;
	input(p);
	display(p);
}
void input(student s1)
{
	cout<<"enter the following information"<<endl;
	cout<<"enter thename"<<endl;
	cin>>s1.name;
		cout<<"enter the age"<<endl;
	cin>>s1.age;
	
		cout<<"enter the roll"<<endl;
	cin>>s1.roll;
	
		cout<<"enter the gender"<<endl;
	cin>>s1.gender;
	
		cout<<"enter the class"<<endl;
	cin>>s1.clas;
	
}
void display(student s1)
{
	cout<<"name is"<<s1.name;
	cout<<"roll is"<<s1.roll;
	cout<<"gender is"<<s1.gender;
	cout<<"age is"<<s1.age;
	cout<<"clas is"<<s1.clas;
	
	
}
