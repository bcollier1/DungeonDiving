// DungeonDiving.cpp : Defines the entry point for the console application.
// Project Name: DungeonDiving
// Created by: Brady Collier
// Date Finished: April 5th, 2018
// Contributors: Brady Collier
// Group Members: Oliver, Hailey, Ryan, Devon

#include "stdafx.h"
#include <iostream>
#include <string>
#include "sroom1.h"

using namespace std;

int main() {
	
	//Variables for menu options
	int menu = 1;
	int choice;
	bool start = true;
	bool level1 = true;

	//Check for what user will input
	while(start) {
		if (menu == 1) {
			cout << "Main Menu\n";
			cout << "Please make your selection\n";
			cout << "1 - Start Game\n";
			cout << "2 - Options\n";
			cout << "3 - Quit\n";
			cout << "Selection: ";
			cin >> choice;
		}
		if (menu == 1 && choice == 3) {
			cout << "\nThank you for playing\n\n";
			start = false;
			level1 = false;
		}
		else if (menu == 1 && choice == 2) {
			cout << "\nNot available\n\n";
		}
		else if (menu == 1 && choice == 1) {
			start = false;
			system("CLS");
		}

	}
	//Goes to levels
	while (level1) {
		room1();
	}
	system("PAUSE");
    return 0;

}

