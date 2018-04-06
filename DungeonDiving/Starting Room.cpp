// Project Name: DungeonDiving
// Starting_Room.cpp : Beginning Stages of the game
// Created by: Brady Collier
// Date Finished: April 5th, 2018
// Contributors: Brady Collier
// Group Members: Oliver, Hailey, Ryan, Devon

#include "stdafx.h"
#include <iostream>
#include <string>
#include "eroom.h"

using namespace std;

//Global variables
char dir;
char ans;
int gear = 0;
int key = 0;
int area = 0;
int point = 0;

//R# = The rooms
void r3() {
	//Boolean for while statments for loop
	bool r3ans = true;
	bool r3ans1 = true;
	//Prompts user where they are
	cout << "\nYou have entered a room! You notice something strange. The bedsheets\n";
	cout << "are off the bed and been thrown onto the ground but in a weird shape.\n";
	cout << "Do you wish to search the sheets?(Y or N)\n\n";
	//Gets users answer
	cin >> ans;
	//Checks what they have entered
	while (r3ans) {
		if (ans == 'Y' || ans == 'y') {
			//Prompts user dialogue 
			cout << "\nYou notice that there is a blood stain. YOUR TIME IS NOW TICKING!\n\n";
			r3ans = false;
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "\nYou continue to search the room\n\n";
			r3ans = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}
	//Prompts user of dialogue **This is repeated many times ignore the lack of comments due to repition**
	cout << "You notice there is a dresser. Do you wish to search it? (Y or N)\n\n";
	cin >> ans;
	while (r3ans1) {
		if (ans == 'Y' || ans == 'y') {
			cout << "You have found the murder weapon! YOUR TIME IS NOW TICKING!\n\n";
			r3ans1 = false;
			//Variable for area which = voids
			area = 2;

		}
		else if (ans == 'N' || ans == 'n') {
			cout << "There is nothing else to search in the room you can now leave.\n\n";
			r3ans1 = false;
			area = 2;

		}
		else {
			//Prompts user that they have entered an invaild answer
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}

}

void r4() {
	bool r4ans = true;
	bool r4ans1 = true;
	bool r4dir = true;
	cout << "\nYou have entered a room that contains a couch with all the cushions off the\n";
	cout << "floor. You notice that there was something shiny on the couch. Do you\n";
	cout << "wish to search the couch? (Y or N)\n\n";
	cin >> ans;
	while (r4ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "\nYou have picked up the victims earing! TIME IS TICKING!\n";
			r4ans = false;
			area = 5;
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "\nYou notice that there is a side table next to the couch. Do you wish to search\n";
			cout << "it?(Y or N)\n\n";
			cin >> ans;
			while (r4ans1) {
				if (ans == 'Y' || ans == 'y') {
					cout << "\nYou opened the drawer and there was nothing there. TIME IS TICKING!\n";
					r4ans = false;
					r4ans1 = false;
					area = 5;
				}
				else if (ans == 'N' || ans == 'n') {
					cout << "\nThere is nothing left to search in the room. TIME IS TICKING!\n";
					r4ans = false;
					r4ans1 = false;
					area = 5;
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
}

void r7() {
	cout << "\nTick, tick, tick, tick... BOOOM!!!\n";
	cout << "Uh-oh you have died due to an explosion. Thank you for playing!\n\n";
	system("PAUSE");
	exit(0);
}

void r9() {
	bool r9ans = true;
	bool r9ans1 = true;
	cout << "\nYou have entered a room. You noticed that there is piano with blood\n";
	cout << "on it. Do you wish to collect a blood sample? (Y or N)\n\n";
	cin >> ans;
	while (r9ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "\n'You have collected a sample of blood'";
			r9ans = false;
		}
		else if (ans == 'N' || ans == 'n') {
			r9ans = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}
	cout << "\nThere is a table with a ripped shirt. Do you wish to take it? (Y or N)\n\n";
	cin >> ans;
	while (r9ans1) {
		if (ans == 'Y' || ans == 'y') {
			cout << "'You have collected a ripped shirt' ";
			r9ans1 = false;
		}
		else if (ans == 'N' || ans == 'n') {
			r9ans1 = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
		}
	}
	cout << "There is nothing left to search in the room.\n";
	area = 8;
}

void r10() {
	bool r10ans = true;
	bool r10ans1 = true;
	bool r10ans2 = true;
	bool r10ans3 = true;
	cout << "\nYou have entered a room that contains a rug that has a bulge in the\n";
	cout << "center of it. Did you want to search to see what's there. (Y or N)\n\n";
	cin >> ans;
	while (r10ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "\nThere was a gear under the rug. Do you want to pick it up? (Y or N)\n\n";
			cin >> ans;
			while (r10ans1) {
				if (ans == 'Y' || ans == 'y' && gear == 0) {
					cout << "\n'You have picked up a gear.'\n";
					r10ans1 = false;
					gear = 1;
				}
				else if (ans == 'N' || ans == 'n') {
					r10ans1 = false;
				}
				else {
					cout << "Wrong answer! Enter Y OR N\n\n";
					cin >> ans;
				}
			}
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "\nYou notice there is a grandfather clock. Do you want to search it? (Y or N)\n\n";
			cin >> ans;
			while (r10ans2) {
				if (ans == 'Y' || ans == 'y' && gear == 0) {
					cout << "\nYou notice that there is a missing gear. Find it and then come back\n\n";
					r10ans2 = false;
					area = 11;

				}
				if (ans == 'Y' || ans == 'y' && gear == 1) {
					cout << "\nYou have found the key!";
					key = 1;
					r10ans = false;
					r10ans2 = false;
					area = 11;

				}
				else if (ans == 'N' || ans == 'n') {
					cout << "\nThere is nothing else to search\n\n";
					r10ans = false;
					r10ans2 = false;
					area = 11;
				}
				else {
					cout << "\nWrong answer! Enter Y OR N\n\n";
					cin >> ans;
				}
			}
		}
		cout << "\nYou notice there is a grandfather clock. Do you want to search it? (Y or N)\n\n";
		cin >> ans;
		while (r10ans3) {
			if (ans == 'Y' || ans == 'y' && gear == 0) {
				cout << "\nYou notice that there is a missing gear. Find it and then come back\n\n";
				r10ans = false;
				r10ans3 = false;
				area = 11;

			}
			if (ans == 'Y' || ans == 'y' && gear == 1) {
				cout << "\nYou have found the key!";
				key = 1;
				r10ans = false;
				r10ans3 = false;
				area = 11;

			}
			else if (ans == 'N' || ans == 'n') {
				cout << "\nThere is nothing else to search\n\n";
				r10ans = false;
				r10ans3 = false;
				area = 11;
			}
			else {
				cout << "\nWrong answer! Enter Y OR N\n\n";
				cin >> ans;
			}
		}
	}
}

void r12() {
	bool r12ans = true;
	bool r12ans1 = true;
	cout << "\nYou have entered a room that has a chair. Do you wish to search it? (Y or N)\n\n";
	cin >> ans;
	while (r12ans) {
		if (ans == 'Y' || ans == 'y') {
			cout << "\nThere is nothing in the chair to search.";
			r12ans = false;
		}
		else if (ans == 'N' || ans == 'n') {
			r12ans = false;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
			cin >> ans;
		}
	}
	cout << "\nYou notice something flickering in the fire place. Would you like to\n";
	cout << "investigate what it is? (Y or N)\n\n";
	cin >> ans;
	while (r12ans1) {
		if (ans == 'Y' || ans == 'y') {
			cout << "\n'You have collect the victims phone, it is still functionable'\n";
			r12ans = false;
			r12ans1 = false;
			area = 11;
		}
		else if (ans == 'N' || ans == 'n') {
			cout << "There is nothing left to search in the room!";
			r12ans = false;
			r12ans1 = false;
			area = 11;
		}
		else {
			cout << "Wrong answer! Enter Y OR N\n\n";
		}
	}
}

//H# = Hallways
void h2() {
	bool h2dir = true;
	cout << "You entered a hallway, you can either choose to go east into a bedroom\n";
	cout << "or go south. Which way would you like to go?(E or S)\n\n";
	cin >> dir;
	while (h2dir) {
		if (dir == 'e' || dir == 'E') {
			area = 3;
			h2dir = false;
		}
		else if (dir == 'S' || dir == 's') {
			area = 5;
			h2dir = false;
		}
		else {
			cout << "\nWrong answer! Enter E or S\n\n";
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
			area = 4;
		}
		else if (dir == 'S' || dir == 's') {
			h5dir = false;
			area = 8;
		}
		else if (dir == 'E' || dir == 'e') {
			h5dir = false;
			area = 6;
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}

void h6() {
	bool h6dir = true;
	cout << "\nYou have entered another hallway! Which way would you like to go? (W, S)\n\n";
	cin >> dir;
	while (h6dir) {
		if (dir == 'W' || dir == 'w') {
			h6dir = false;
			area = 5;
		}
		else if (dir == 'S' || dir == 's') {
			h6dir = false;
			area = 9;
		}
		else {
			cout << "Wrong answer! Enter W OR S\n\n";
			cin >> dir;
		}
	}
}

void h8() {
	bool h8dir = true;
	cout << "\nYou have entered another hallway! Which way would you like to go? (W, S)\n\n";
	cin >> dir;
	while (h8dir) {
		if (dir == 'W' || dir == 'w') {
			h8dir = false;
			area = 7;
		}
		else if (dir == 'S' || dir == 's') {
			h8dir = false;
			area = 11;
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}

void h11() {
	bool h11dir = true;
	cout << "\nYou have entered another hallway! Which way would you like to go? (W, S, E)\n\n";
	cin >> dir;
	while (h11dir) {
		if (dir == 'W' || dir == 'w') {
			h11dir = false;
			area = 10;
		}
		else if (dir == 'S' || dir == 's' && key == 0) {
			cout << "\nYou need to unlock the door!\n";
			h11();
		}
		else if (dir == 'S' || dir == 's' && key == 1) {
			cout << "\nCongratulation! You can now enter the next room!\n\n";
			h11dir = false;
			system("PAUSE");
			system("CLS");
			//Enters the next room
			endroom();
		}
		else if (dir == 'E' || dir == 'e') {
			h11dir = false;
			area = 12;
		}
		else {
			cout << "Wrong answer! Enter W, S or E\n\n";
			cin >> dir;
		}
	}
}

int room1() {
	bool acheck = true;
	int room = 0;

	//Main dialogue to introduce the user of the main goal
	cout << "ATTENTION: PRIVATE JONES, YOU MUST FIND WHERE THE MISSING PERSON IS. YOUR\n";
	cout << "TIME IS RUNNING OUT! YOU HAVE 48 HOURS TO FIND THIS PERSON OR YOU WILL FAIL!\n";
	cout << "REPORT BACK TO ME ASAP! GOOD LUCK PRIVATE!\n";
	system("CLS");
	cout << "Time is key! You have enter the victim's house. You have notice that the\n";
	cout << "house is in a mess and that everything is destroyed except for a door.\n";
	h2();
	
	//Check the area that was given to each void above to call
	while (acheck) {
		if (area == 2) {
			h2();
		}
		if (area == 3) {
			r3();
		}
		if (area == 4) {
			r4();
		}
		if (area == 5) {
			h5();
		}
		if (area == 6) {
			h6();
		}
		if (area == 7) {
			r7();
		}
		if (area == 8) {
			h8();
		}
		if (area == 9) {
			r9();
		}
		if (area == 10) {
			r10();
		}
		if (area == 11) {
			h11();
		}
		if (area == 12) {
			r12();
		}
	}

	return 0;
}