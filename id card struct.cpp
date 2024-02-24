#include<iostream>
#include<string>
using namespace std;

	struct id_card
	{
	char name[100];
	char reg_no[100];
	int age[100];
	char address[100];
	char university[100];
	int GPA[100];
			};
	
	
			int main()
		{
			id_card id[5];
			for(int i=0;i<5;i++)
			{
			cout<<"Enrer the name"<<endl;
			cin.getline(id[i].name,100);
				cout<<"Enrer the age"<<endl;
			cin>>id[i].age;
			cin.ignore();
			cout<<"Enrer the reg_no"<<endl;
			cin.getline(id[i].reg_no,100);
		
			cout<<"Enrer the address"<<endl;
			cin.getline(id[i].address,100);
			cout<<"Enrer the university"<<endl;
			cin.getline(id[i].university,100);
			
			cout<<"enrer the GPA"<<endl;
		cin>>id[i].GPA;
			cin.ignore();
			//cin.getline(s[i].name,100);
		
			
		
		
			
			}
			//displaying data
			
		for(int i=0;i<4;i++)
		{
			cout<<"name of person"<<id[i].name<<endl;
			cout<<"reg_no is"<<id[i].reg_no<<endl;
			cout<<"age is"<<id[i].age<<endl;
			cout<<"address is"<<id[i].address<<endl;
			cout<<"university is"<<id[i].university<<endl;
			cout<<"GPA is"<<id[i].GPA<<endl;
			cout<<endl<<endl;
		}
}
