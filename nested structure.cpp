#include<iostream>
using namespace std;
struct date_of_birth{
	int dd,mm,yy;
};

struct student{
	char name[30];
	int rollNumber;
	date_of_birth dob;
};
int main()
{
	student s;
	cout<<"enter the name";
	cin.getline(s.name,30);
	cout<<"enter the roll no";
	cin>>s.rollNumber;
	cout<<"enter the date of birth of the student";
	cout<<"date";
	cin>>s.dob.dd;
	cout<<"month";
	cin>>s.dob.mm;
	cout<<"year";
	cin>>s.dob.yy;
	
	return 0;
	
}
