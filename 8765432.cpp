#include<iostream>
using namespace std;
int main()
{int count =0;
	char arr1[3];
	char arr2[3];
	for(int i=0;i<3;i++)
	{
	cin>>	arr1[i];
	cin>>arr2[i];
	}
	for(int i=0;i<3;i++)
	{if(arr1[i]==arr2[i])
	count ++;
	}
	cout<<count;
	return 0;
	
}
