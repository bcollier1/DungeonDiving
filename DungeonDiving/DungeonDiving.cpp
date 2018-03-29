// DungeonDiving.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "sroom1.h"

using namespace std;

int main() {

	int menu = 1;
	int choice;
	bool start = true;
	bool level1 = true;

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
	while (level1) {
		room1();
	}
	system("PAUSE");
    return 0;

}

