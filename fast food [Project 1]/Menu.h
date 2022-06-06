#pragma once
#include <windows.h>
#include <iostream>
#include<iomanip>
#include"Foods.h"

using namespace std;



void Set_Console_Title(const char* titleName) {

	SetConsoleTitleA(titleName);

}

void Center_Console() {

	
	HWND ConsoleWindow;
	ConsoleWindow = GetForegroundWindow();

	//Getting the desktop hadle and rectangule
	HWND   hwndScreen;
	RECT   rectScreen;
	hwndScreen = GetDesktopWindow();
	GetWindowRect(hwndScreen, &rectScreen);

	//Set windows size(see the width problem)
	SetWindowPos(ConsoleWindow, NULL, 0, 0, 1000, 500, SWP_SHOWWINDOW);

	// Get the current width and height of the console
	RECT rConsole;
	GetWindowRect(ConsoleWindow, &rConsole);
	int Width = rConsole.left = rConsole.right;
	int Height = rConsole.bottom - rConsole.top;

	//caculate the window console to center of the screen	
	int ConsolePosX;
	int ConsolePosY;
	ConsolePosX = ((rectScreen.right - rectScreen.left) / 2 - Width / 2);
	ConsolePosY = ((rectScreen.bottom - rectScreen.top) / 2 - Height / 2);

	SetWindowPos(ConsoleWindow, NULL, ConsolePosX, ConsolePosY, Width, Height, SWP_SHOWWINDOW || SWP_NOSIZE);

}




void Draw_Menu() {

	std::cout << "\t\t\t\t\t\tDancing Chicken House" << std::endl;;

	std::cout << "-----------Main Menu---------------\n" << std::endl;
	std::cout << "[1][CrazeHotDog]----------------$20" << std::endl;
	std::cout << "[2][CheeseBurger]---------------$40" << std::endl;
	std::cout << "[3][CheesePizza(Large)]--------$120\n" << std::endl;
	
	Get_Foodnum();
	Get_Foodamount();

	std::cout << "" << std::endl;

	std::cout << "-----------Drink Menu-------------\n" << std::endl;
	std::cout << "[1][Water]----------------------$4" << std::endl;
	std::cout << "[2][Cola, Sprite, Fanta]--------$8" << std::endl;
	std::cout << "[3][Coke float]-----------------$15\n" << std::endl;


	
	Get_Drinknum();
	Get_Drinkamount();

	std::cout << "" << std::endl;


	Real_print_receipt();
	
	system("pause");

}

void initialize_Menu() {

	Set_Console_Title("Fast Food Buyer"); // set console title
	Center_Console(); // Center console
	Draw_Menu(); // draw menu content


}