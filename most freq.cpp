#include<iostream>
using namespace std;
int fre(int ar[])
{int *p,count;
p=ar;
for(int i=0;i<5;i++)
p=ar;
for(int i=0;i<5;i++)
{
	
	if((*p==ar[i]))
	count ++;

	return (ar[i]);
}
}
int main()
{
	
	int a[5]={2,2,7,2,6};
	cout<<fre(a);
}
