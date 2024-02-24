#include<iostream>
using namespace std;

struct banking
{
	string name;
	int acc_no;
	float balance;
}b[5];

void withdrawal(int i)
{
	int n;
   cout<<"Enter the amount of money you would like to withdraw:";
   cin>>n;
   cout<<"you have successfully withdrawn "<<n<<"Rs.";	
}

void deposit(int i)
{
	int n;
   cout<<"Enter the amount of money you would like to deposit:";
   cin>>n;
   cout<<"you have successfully deposited "<<n<<" Rs.";
}

void display_balance(int i)
{
	cout<<"Account balance = "<<b[i].balance;
}
int main()
{
	int c;
	int i;
	for(i=1;i<3;i++)
	{
	cout<<"data of customer: "<<i<<endl;
	cout<<"Enter customer name:"<<endl;
	cin>>b[i].name;
	cout<<"Enter Account number:"<<endl;
	cin>>b[i].acc_no;
	cout<<"Enter Account Balance:"<<endl;
	cin>>b[i].balance;
}
    
    cout<<"Enter your choice:"<<endl;
	cout<<"Press 1 to withdraw"<<endl<<"Press 2 to deposit"<<endl<<"Press 3 to check balance"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
			withdrawal(i);
			break;
		case 2:
			deposit(i);
			break;
		case 3:
			display_balance(i);
			break;
		default:
			cout<<"Invalid input!";
	}
	return 0;
}
