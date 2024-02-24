#include<iostream>
using namespace std;

struct point
{
	int x ;
int 	y ;
	
};
int main(){

point p1,p2;
cout<<"enter the cordinate of points";
cin>>p1.x ;
cin>>p1.y ;
cout<<"enter the cordinate of 2nd points";
cin>>p2.x ;
cin>>p2.y ;
cout<<"sum of x cordinate are";
cout<<p1.x +p2.x ;
cout<<"sum of y cordinate are";
cout<<p1.y +p2.y ;
}

