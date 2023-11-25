#include "Flat.h"
#include<iostream>

bool operator==(const Flat& a, const Flat& b)
{
	return a.size == b.size;
}

bool operator>(const Flat& a, const Flat& b)
{
	return a.price>b.price;
}

Flat& Flat::operator=(const Flat& a)
{
	if (this==&a)
	{
		return *this;
	}

	this->size = a.size;
	this->price = a.price;
	return *this;
}
