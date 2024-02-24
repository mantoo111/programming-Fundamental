#include<iostream>
using namespace std;
int main()
{
	char x='a';
	char arr[]="hellow ansa abid latif";
	

	
	int count=0;
	for(int i=0;i<sizeof(arr);i++)
	{
		
		if(arr[i]==x)
		count++;
	}

		cout<<"the number of times a appear is"<<count;
	
	
//	cout<<sizeof(arr[8]);

}
