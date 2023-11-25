#pragma once
#include<iostream>

using namespace std;

class Flat
{
	double size;
	int price;

public:

	Flat(double size, int price) :
		size{ size },
		price{ price }
	{}
	Flat() :Flat(0, 0) {}
	Flat(const Flat& obj) :
		size{obj.size},
		price{obj.price}
	{}

	double getSize() const
	{
		return size;
	}
	int getPrice() const
	{
		return price;
	}
	
	Flat& setSize(double size)
	{
		this->size = size;
		return *this;
	}
	Flat& setPrice(int price)
	{
		this->price = price;
		return *this;
	}


	void show()
	{
		cout << "Price = " << price << " " << "Size = " << size << endl;
	}

	friend bool operator==(const Flat& a, const Flat& b);

	Flat& operator=(const Flat& a);

	friend bool operator>(const Flat& a, const Flat& b);
		
};

