#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,6,8,4,5};

int *p;	
for(int i=0;i<5;i++){
p=&arr[4];
cout<<"in reverse order";
for(int i=0;i<5;i++)
cout<<*p--<<endl;
}
return 0;
}
