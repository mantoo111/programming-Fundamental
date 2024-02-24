#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inches;
};
struct room
{
struct	distance lenght;
struct	distance width;
};
int main()
{
	room dining;
	dining.lenght.feet=13;
	dining.lenght.inches=6.5;
	dining.width.feet=10;
		dining.width.inches=0.0;
		float l=dining.lenght.feet+dining.lenght.inches/12;
			float w=dining.width.feet+dining.width.inches/12;
			cout<<l*w;
			return 0;
}
