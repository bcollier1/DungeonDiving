// Starting_Room.cpp : Beginning Stages of the game

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

char dir;
char ans;

void r3() {
	bool r3ans = true;
	bool r3ans1 = true;
	cout << "You have entered a room! You notice something strange. The bedsheets\n";
	cout << "are off the bed and been thrown onto the ground but in a weird shape.\n";
	cout << "Do you wish to search the sheets?(Y or N)\n\n";
	cin >> ans;
	while (r3ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "You notice that there is a blood stain. YOUR TIME IS NOW TICKING!\n\n";
			r3ans = false;
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "You continue to search the room\n\n";
			r3ans = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}
	cout << "You notice there is a dresser. Do you wish to search it? (Y or N)\n\n";
	cin >> ans;
	while (r3ans1) {
		if (ans == 'Y' || ans == 'y') {
			cout << "You have found the murder weapon! YOUR TIME IS NOW TICKING!";
			r3ans1 = false;
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "There is nothing else to search in the room you can now leave.\n\n";
			r3ans1 = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}
	system("PAUSE");
}

void r7() {
	cout << "";
}

void r10() {

}

void r12() {

}

void h11() {
	bool h11dir = true;
	cout << "\n\nYou have entered another hallway! Which way would you like to go? (W, S, E)\n\n";
	cin >> dir;
	while (h11dir) {
		if (dir == 'W' || dir == 'w') {
			h11dir = false;
			r10();
		}
		else if (dir == 'S' || dir == 's') {
			h11dir = false;
			h11(); // This will have to be the exit of some sort
		}
		else if (dir == 'E' || dir == 'e') {
			h11dir = false;
			r12();
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}

void r9() {

}

void h6() {

}

void h8() {
	bool h8dir = true;
	cout << "\n\nYou have entered another hallway! Which way would you like to go? (W, S)\n\n";
	cin >> dir;
	while (h8dir) {
		if (dir == 'W' || dir == 'w') {
			h8dir = false;
			r7();
		}
		else if (dir == 'S' || dir == 's') {
			h8dir = false;
			h11();
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}


void r4() {
	bool r4ans = true;
	bool r4ans1 = true;
	bool r4dir = true;
	cout << "You have entered a room that contains a couch with all the cushions off the\n";
	cout << "floor. You notice that there was something shiny on the couch. Do you";
	cout << "wish to search the couch? (Y or N)\n";
	cin >> ans;
	while (r4ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "You have picked up the victims earing! TIME IS TICKING!\n";
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "You notice that there is a side table next to the couch. Do you wish to search it?\n";
			cout << "(Y or N)";
			cin >> ans;
			while (r4ans1) {
				if (ans == 'Y' || ans == 'y') {
					cout << "You opened the drawer and there was nothing there. TIME IS TICKING!\n";
					r4ans1 = false;
				}
				else if (ans == 'N' || ans == 'n') {
					cout << "There is nothing left to search in the room. TIME IS TICKING!\n";
					r4ans1 = false;
				}
				else {
					cout << "Wrong answer! Enter Y or N\n\n";
					cin >> ans;
				}
			}
		}
		else {
			cout << "Wrong answer! Enter Y or N\n\n";
			cin >> ans;
		}
	}
	cout << "You have left the room.";
	cout << "Your back into the hall which way would like to go? (S, E)";
	cin >> dir;
	while (r4dir) {
		if (dir == 'S' || dir == 's') {
			r4dir = false;
			h8();	
		}
		else if (dir == 'E' || dir == 'e') {
			r4dir = false;
			h6();
		}
		else {
			cout << "Wrong answer! Enter S or E\n\n";
			cin >> dir;
		}
	}
}


void h5() {
	bool h5dir = true;
	cout << "\nYou have entered a hallway! Which way would you like to go? (W, S, E)\n\n";
	cin >> dir;
	while (h5dir) {
		if (dir == 'W' || dir == 'w') {
			h5dir = false;
			r4();
		}
		else if (dir == 'S' || dir == 's') {
			h5dir = false;
			h8();
		}
		else if (dir == 'E' || dir == 'e') {
			h5dir = false;
			h6();
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}


int room1() {

	int room = 0;


	cout << "ATTENTION: PRIVATE JONES, YOU MUST FIND WHERE THE MISSING PERSON IS. YOUR\n";
	cout << "TIME IS RUNNING OUT! YOU HAVE 48 HOURS TO FIND THIS PERSON OR YOU WILL FAIL!\n";
	cout << "REPORT BACK TO ME ASAP! GOOD LUCK PRIVATE!\n";
	system("CLS");
	cout << "Time is key! You have enter the victim's house. You have notice that the\n";
	cout << "house is in a mess and that everything is destroyed except for a door.\n";
	cout << "Your option to go is east.\n";
	cout << "You have now moved east, you can either choose to go east into a bedroom\n";
	cout << "or go south. Which way would you like to go?(E or S)\n\n";
	cin >> dir;
	if (dir == 'e' || dir == 'E') {
		r3();
	}
	else if (dir == 'S' || dir == 's') {
		h5();
	}


	return 0;
}
