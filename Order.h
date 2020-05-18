#pragma once
#include <stdio.h>
#include "Product.h"
#include "Customer.h"
#include "Output.h"

class Order 
{
private:
	Customer* cst;
	Product** array;
	int count;
public:
	Order(Customer* _cst) // Vytvareni objednavky pro zakaznika
	{
		cst = _cst;
		array = (Product**)malloc(sizeof(Product)*100);
		count = 0;
	}
	~Order()
	{
		delete[]array;
	}
	void addProduct(Product* pr) // Pridani produktu do polozky (eshop kosik)
	{
		array[count] = pr;
		count++;
	}
	Product* GetProduct(int idx) // Vytahnuti produktu ze zaznamu
	{
		return array[idx];
	}
	Customer* GetCustomer() // Vytahnuti zakaznika ze zaznamu
	{
		return cst;
	}
	int GetNumberofProducts() // Ziskani poctu produktu 
	{
		return count;
	}
};