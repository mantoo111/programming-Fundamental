#include<iostream>
using namespace std;
int input(int value[]);
int sort(int value[]);
int show(int value[]);
int search(int value[]);
int main()
{

	input(value);
 sort(value);
show(value);
	
}
int input(int value[]){
	cout<<"enter the number";
	for(int i=0;i<10;i++)
	{
		cin>>value[i];
	}
}
int sort(int *value[])
{
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(value[i]==value[j])
			{
				int temp=value[i];
				value[i]=value[j];
				value[j]=int temp;
			}
			}
		}
}
int show(int value[]);
{
	cout<<"sorted array is ";
	for(int i=0;i<10;i++)
	{
		cout<<value[i];
	}
}
