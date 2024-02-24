#include<iostream>
#include<string.h>
using namespace std;

class Car {
	public:
	string name;
	int model;
	string color;
	int price;
Car()
	{
	name = "swift";
	model = 2018;
	color = "silver";
	price = 4550000;
}
	Car(string n,int m,string c,int p)
	{
		name = n;
		model = m;
		color = c;
		price = p;
}
	//implementing copy constructor:
	
	Car(Car &ref)
	{
		name = ref.name;
		model = ref.model;
		color = ref.color;
		price = ref.price;
		}
};
int main() {
		Car c1;
		Car c2("cultus",2019,"white",300000);
		Car r(c2);
	cout<<"Car name: "<<c1.name<<endl;
	cout<<"Car model: "<<c1.model<<endl;
		cout<<"Car color: "<<c1.color<<endl;
cout<<"Car price: "<<c1.price<<endl;

cout<<"Car name: "<<c2.name<<endl;
		
		cout<<"Car model: "<<c2.model<<endl;
cout<<"Car color: "<<c2.color<<endl;
cout<<"Car color: "<<c2.price<<endl;

cout<<"Sold car:Implementing Copy Constructor ";
		cout<<"Car name: "<<r.name<<endl;
		
	cout<<"Car model: "<<r.model<<endl;
	cout<<"Car color: "<<r.color<<endl;
cout<<"Car price: "<<r.price<<endl;
}

 

