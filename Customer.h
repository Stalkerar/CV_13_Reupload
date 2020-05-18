#pragma once
#include <stdio.h>
#include <iostream>
#include "Product.h"

using namespace std;
class Customer 
{
private:
	string name;

public:
	Customer(string _name) 
	{
		name = _name;
	}
	string GetName()
	{
		return name;
	}
};

class UnregistredCostumer : public Customer
{
private:
	int age;
public:
	UnregistredCostumer(string _name,int _age) : Customer(_name)
	{
		age = _age;
	}
};

class RegisteredCustomer : public Customer
{
private:
	int register_id;
public:
	RegisteredCustomer(string _name, int _register_id) : Customer(_name)
	{
		register_id = _register_id;
	}
	int GetId()
	{
		return register_id;
	}
};

// pozice ve firme jakozto vyjmecny faktor 
class CompanyUser : public RegisteredCustomer
{
private:
	string pozice;
public:
	CompanyUser(string _name,string _pozice,int id) : RegisteredCustomer(_name,id)
	{
		pozice = _pozice;
	}
};

class RegisteredUser : public RegisteredCustomer
{
private:
	int sale_value;
public:
	RegisteredUser(string _name,int _sale_value,int id) : RegisteredCustomer(_name,id)
	{
		sale_value = _sale_value;
	}
};