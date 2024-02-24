#include<iostream>
using namespace std;
struct banking{
	char customer_name[100];
	int account_no;
	float balance;
}b[5];
void withdrawl(int i){
	int amount;
	cout<<"Enter the amount you want to withdraw: "<<endl;
	cin>>amount;
	cout<<"You have successfully withdrawn Rs."<<amount<<endl;
}
void deposit(int i){
	int amount;
	cout<<"Enter the amount you want to deposit: "<<endl;
	cin>>amount;
	cout<<"You have successfully deposited Rs."<<amount<<endl;
}
void display_balance(int i){
	cout<<"Your balance is: "<<b[i].balance;
		cout<<endl;
}
int main(){
	int i,choice;
	for(i=1;i<=5;i++){
cout<<"Customer name: ";
		cin>>b[i].customer_name;
		cout<<"Account no: ";
		cin>>b[i].account_no;
		cout<<"Balance: ";
		cin>>b[i].balance;
		cout<<endl;
	}
cout<<"Enter your ID (1-5): "<<endl;
cin>>i;
cout<<"Enter your choice: "<<endl;
cout<<"Press 1 for depositing"<<endl;
cout<<"Press 2 to withdrawal"<<endl;
cout<<"Press 3 to check Balance"<<endl;
cin>>choice;
switch(choice)
	{
		case 1:
			withdrawl(i);
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

}
