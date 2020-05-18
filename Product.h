#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Product 
{
private:
	int price;
	string name;
public:
	Product(int _price, string _name) 
	{
		price = _price;
		name = _name;
	}
	int GetPrice()
	{
		return price;
	}
	string GetName()
	{
		return name;
	}
};

class Phone : public Product
{
private:
	string phone_type;
public:
	Phone(string _name, string _phone_type, int _value) : Product(_value,_name)
	{
		phone_type = _phone_type;
	}
};

class Notebook : public Product
{
private:
	string note_type;
public:
	Notebook(string _name, string _note_type, int _value) : Product(_value, _name)
	{
		note_type = _note_type;
	}
};

class Tablet : public Product
{
private:
	string tablet_type;
public:
	Tablet(string _name, string _tablet_type, int _value) : Product(_value, _name)
	{
		tablet_type = _tablet_type;
	}
};