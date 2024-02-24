#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=3;i>=0;i--)
	{
		for(int j=3;j>=0;j--)
	
		cout<<arr[i][j]<<"\t";
	}
	return 0;
}
