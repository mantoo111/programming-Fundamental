#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inches;
};
struct room
{
int  width;
int length;
distance d;
};
int main()
{
	room dining;
	dining.width=10;
	dining.length=13;
	dining.d.inches=6.5;
	dining.d.feet=0.0;
		float l=dining.length.feet+dining.lenght.inch/12;
			float w=dining.width.feet+dining.width.inch/12;
			cout<<l*w;
			return 0;
}
