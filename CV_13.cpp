#include <stdio.h>
#include <iostream>
#include "Customer.h"
#include "Product.h"
#include "Output.h"
#include "Order.h"
using namespace std;



int main()
{
	StringOutput* obj = new StringOutput();

	// Vytvoreni Produktu
	Notebook* note1 = new Notebook("Predator", "HP", 35000);
	Notebook* note2 = new Notebook("Alien", "Alienvare", 28500);

	Tablet* tb1 = new Tablet("Rookie", "Samsung", 12000);
	Tablet* tb2 = new Tablet("Pro", "Nokia", 8500);

	Phone* ph1 = new Phone("A15", "Apple", 19000);
	Phone* ph2 = new Phone("Z13", "Huawei", 13500);

	// Vytvoreni Zakazniku
	UnregistredCostumer* cus1 = new UnregistredCostumer("Jurko Straka", 25);
	RegisteredCustomer* cus2 = new RegisteredCustomer("Pavol Habera", 24555);
	CompanyUser* cus3 = new CompanyUser("Jirko Novy", "Ucetni", 1000);
	RegisteredUser* cus4 = new RegisteredUser("Pepa Vytekly", 20, 12457);

	//Vytvareni objednavek
	Order* ord1 = new Order(cus1);
	ord1->addProduct(tb1);
	ord1->addProduct(ph2);
	Order* ord2 = new Order(cus1);
	ord2->addProduct(note2);
	ord2->addProduct(ph1);
	Order* ord3 = new Order(cus4);
	ord3->addProduct(note1);
	// Pridani objedanvky do zaznamu
	obj->addOrder(ord1);
	obj->addOrder(ord2);
	obj->addOrder(ord3);
	// Tisk Objednavek
	obj->Print_orders();
}
