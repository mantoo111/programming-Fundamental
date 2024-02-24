#include<iostream>
using namespace std;
int sum(int n);
int main()
{
int n;
cout<<"enter the number"<<endl;
cin>>n;
cout<< sum(n)<<endl;
}
int sum(int n)
{
if(n==0)

return 0;

return n+sum(n-1);
}
