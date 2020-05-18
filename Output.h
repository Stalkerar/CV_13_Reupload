#pragma once
#include <stdio.h>
#include "Product.h"
#include "Customer.h"
#include "Order.h"

class StringOutput // Textovy vystup
{
private:
	Order** array;
	int count;
public:
	StringOutput()
	{
		array = (Order**)malloc(sizeof(Order) * 15);
		count = 0;
	}
	~StringOutput()
	{
		delete[]array;
	}

	// Pridani zakaznika s jeho vyberem zbozi
	void addOrder(Order* order)
	{
		array[count] = order;
		count++;
	}
	// Provedeni celkove castky nakupu pro daneho zakaznika
	int GetValueofOrder(Order* order)
	{
		int j = order->GetNumberofProducts();
		int buffer = 0;
		for (int a = 0; a < j; a++)
		{
			buffer += order->GetProduct(a)->GetPrice();
		}
		return buffer;
	}
	// Tisk objednavky
	void Print_orders()
	{
		for (int a = 0; a < count; a++)
		{
			cout << "Objednavka:" << a+1 << " " << array[a]->GetCustomer()->GetName() << " produkty: ";
			for (int b = 0; b < array[a]->GetNumberofProducts(); b++)
			{
				cout << array[a]->GetProduct(b)->GetName() << ", ";
			}
			cout << GetValueofOrder(array[a]);
			putchar('\n');
		}
	}
};

