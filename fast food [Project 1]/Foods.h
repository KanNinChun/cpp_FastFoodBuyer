#pragma once
#include"Menu.h"
#include<iostream>
#include<windows.h>
using namespace std;


struct Foodvars
{
public:
	int Food_sets;
	int Food_amount;
	int Food_total;
}fv;

struct Drinkvars
{
public:
	int Drink_sets;
	int Drink_amount;
	int Drink_total;
}dv;

struct allPrice
{

		int CrazeHotDog = 20;
		int CheeseBurger = 40;
		int CheesePizza = 120;
		int Water = 4;
		int soda = 8;
		int Cokefloat = 15;
		
}ap;



struct pay
{
	int cash;
	int total;
}py;


void Get_Foodnum() {

		std::cout << "Enter The set you want: ";
		cin >> fv.Food_sets;

		if (fv.Food_sets <= 0 || fv.Food_sets > 3)
		{
			std::cout << "\nInvaild input,  Program will exit in 2s" << std::endl;
			Sleep(2000);
			exit(1);
		}

		if (cin.fail())
		{

			std::cout << "\nInvaild input,Program will exit in 2s" << std::endl;
			Sleep(2000);
			exit(1);

		}
}

void Get_Foodamount() {

	std::cout << "Enter The amount you want: ";
	cin >> fv.Food_amount;

	if (cin.fail() )
	{
		
		std::cout << "\nInvaild input, Program will exit in 2s" << std::endl;
		Sleep(2000);
		exit(1);
	}
}


void Get_Drinknum() {

		std::cout << "Enter the Drink set you want: ";
		cin >> dv.Drink_sets;

		if (dv.Drink_sets <= 0 || dv.Drink_sets > 3)
		{
			std::cout << "\nInvaild input,Program will exit in 2s" << std::endl;
			Sleep(2000);
			exit(1);
		}

		if (cin.fail())
		{

			std::cout << "\nInvaild input,Program will exit in 2s" << std::endl;
			Sleep(2000);
			exit(1);

		}
		
}

void Get_Drinkamount() {

	std::cout << "Enter the amount you want: ";
	cin >> dv.Drink_amount;

	if (cin.fail())
	{
		
		std::cout << "\nInvaild input, Program will exit in 2s" << std::endl;
		Sleep(2000);
		exit(1);
	}
}

void print_receipt1() {



	if (fv.Food_sets == 1)
	{
		std::cout << "\n\n\t\t\t\tCrazeHotDog X "<<fv.Food_amount << "\tcost: $" <<  (ap.CrazeHotDog * fv.Food_amount) << std::endl;
		fv.Food_total = (ap.CrazeHotDog * fv.Food_amount);
	}
	else if (fv.Food_sets == 2)
	{
		std::cout << "\n\n\t\t\t\tCheeseBurger X " << fv.Food_amount << "\tcost: $" << (ap.CheeseBurger * fv.Food_amount) << std::endl;
		fv.Food_total = (ap.CheeseBurger * fv.Food_amount);
	}
	else if (fv.Food_sets == 3)
	{
		std::cout << "\n\n\t\t\t\tCheesePizza(Large)" << fv.Food_amount << "\tcost: $" << (ap.CheesePizza * fv.Food_amount) << std::endl;
		fv.Food_total = (ap.CheesePizza * fv.Food_amount);
	}

	


	if (dv.Drink_sets == 1)
	{
		std::cout << "\t\t\t\tWater X "<< dv.Drink_amount << "\tcost: $" << (ap.Water * dv.Drink_amount) << std::endl;
		dv.Drink_total = (ap.Water * dv.Drink_amount);
	}
	else if (dv.Drink_sets == 2)
	{
		std::cout << "\t\t\t\tsoda X " << dv.Drink_amount << "\tcost: $" <<(ap.soda * dv.Drink_amount) << std::endl;
		dv.Drink_total = (ap.soda * dv.Drink_amount);
	}
	else if (dv.Drink_sets == 3)
	{
		std::cout << "\t\t\t\tCoke float X " << dv.Drink_amount << "\tcost: $" << (ap.Cokefloat * dv.Drink_amount) << std::endl;
		dv.Drink_total = (ap.Cokefloat * dv.Drink_amount);
	}

	py.total = fv.Food_total + dv.Drink_total;


}

void Real_print_receipt()
{
	std::cout << "" << std::endl;
	std::cout<<"\t\t\t\tDancing Chicken House Receipt";
	print_receipt1();
	std::cout << ""<< std::endl;
	std::cout << "\t\t\t\tTotal cost : $"<<py.total << std::endl;;
	getchar();
	
}




