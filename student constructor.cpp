#include<iostream>
#include<string.h>
using namespace std;
class Student{
	public:
	string name;
	int age;
	int id;
	int gpa;
	Student(){
	name="ANSA";
	 age=19;
	 id=5;
	 gpa=3;	
	}
	Student(string n,int a,int i,int g){
		
	name=n;
	 age=a;
	 id=i;
	 gpa=g;
}
Student(Student &obj){	
name=obj.name;
age=obj.age;
id=obj.id;
gpa=obj.gpa;
}
};
int main()
{
	Student s1;
	Student s2("ASMA",23,6,4);
	Student r(s1);
	cout<<"name is "<<s1.name<<endl;
	cout<<"age is "<<s1.age<<endl;
	cout<<"id is "<<s1.id<<endl;
	cout<<"gpa is "<<s1.gpa<<endl;
	cout<<"name is "<<s2.name<<endl;
	cout<<"age is "<<s2.age<<endl;
	cout<<"id is "<<s2.id<<endl;
	cout<<"gpa is "<<s2.gpa<<endl;
	cout<<"implimenting copy consructor "<<endl;
	cout<<"name is "<<r.name<<endl;
	cout<<"age is "<<r.age<<endl;
	cout<<"id is "<<r.id<<endl;
	cout<<"gpa is "<<r.gpa<<endl;
}
