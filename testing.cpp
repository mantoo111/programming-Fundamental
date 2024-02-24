#include<iostream>
using namespace std;
int main()
{
	int n,d1;
	int arr[3];
	int *ptr;
	for(int i=0;i<=3;i++)
	{
		ptr=&arr[i];
	}
		for(int i=0;i<=3;i++)
	cin >>*(ptr+i);
	d1 = n%10;
		cout<<d1;

}
