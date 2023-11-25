#include<iostream>
#include"Flat.h"
using namespace std;

int main()
{
	Flat p1(47.4, 6000);
	Flat p2(45.4, 5000);


	p1.show();
	p2.show();

	if (p2 == p1)
	{
		cout << "Size of These flats equal" << endl;
	}
	else
	{
		cout << "Size of These flats not equal" << endl;
	}


	p1 = p2;

	p1.show();
	p2.show();
	if (p1 == p2)
	{
		cout << "Size of These flats equal" << endl;
	}
	else
	{
		cout << "Size of These flats not equal" << endl;
	}


	Flat p3(50, 4000);

	if (p1 > p3)
	{
		cout << "Price of that flat more" << endl;
	}
	else
	{
		cout << "Price of that flat less" << endl;
	}

}