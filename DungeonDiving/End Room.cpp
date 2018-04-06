//Group project
//March 22, 2018
//To: Mr. Saxberg
//Ryan Hubbard

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int endroom()
{
	//variable declaration
	bool room1 = true;
	bool room2 = false;
	bool room3 = false;
	bool room4 = false;
	bool room5 = false;
	bool room6 = false;
	bool room7 = false;
	bool room8 = false;
	bool room9 = false;
	bool flashlight = false;
	bool armour = false;
	bool stilts = false;
	bool pickaxe = false;
	bool diamond = false;
	bool sword = false;
	bool key = false;
	bool beenthere = false;
	char ans;
	string ans1 = "a";
	bool alive = true;


	//opening message
	cout << "You enter an abandon house, searching for the dead body.";

	while (alive == true) {
		if (room1 == true) {
			if (flashlight == false) {
				cout << "\nYou are in a creepy dark room. You cannot see anything." << "\n";
			}
			if (flashlight == true) {
				cout << "Your flashlight allows you to see a suit of armour. That might be useful if you need to defend yourself. Would you like to pick it up? Yes(y) or no(n)?" << "\n";
				cin >> ans;
				if (ans == 'y' || ans == 'Y') {
					armour = true;
					cout << "The armour seems a little too big for you. This is a useless suit of armour." << "\n";
				}
			}
			cout << "Would you like to go south(s) or east(e)?" << "\n\n";
			cin >> ans;
			if (ans == 'e' || ans == 'E') {
				room2 = true;
				room1 = false;
			}
			if (ans == 's' || ans == 'S') {
				room4 = true;
				room1 = false;
			}
		}


		//room 2
		if (room2 == true) {
			cout << "\nYou enter a room filled with plants and trees. Vines are covering the walls.\n";
			cout << "Would you like to go south(s), east(e) or west(w) ? " << "\n\n";
			cin >> ans;
			if (ans == 'e' || ans == 'E') {
				room3 = true;
				room2 = false;
			}
			if (ans == 's' || ans == 'S') {
				room5 = true;
				room2 = false;
			}
			if (ans == 'w' || ans == 'W') {
				room1 = true;
				room2 = false;
			}
		}

		//room 3
		if (room3 == true) {
			cout << "\nYou see a giant troll with a key. Would you like to attack the troll? Yes(y) or no(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'y' || ans == 'Y') {

				if (sword == true && diamond == true) {
					cout << "You apply the diamond to your sword and kill the troll. It had no chance. You grab the key." << "\n";
					key = true;
				}
				else if (sword == true && diamond == false) {
					cout << "You spend hours going head to head with the troll. You end up defeating it, but you are wounded. You\n";
					cout << "grab they key." << "\n";
					key = true;
				}
				else if (pickaxe == true) { //game over if you only have the pickaxe
					cout << "You die from a blow to the head from the troll. Well fought. Game over. " << "\n";
					return (0);
					alive = false;
				}
				else if (pickaxe == false && sword == false) { //game over if you have no weapon
					cout << "You only lasted two seconds in the fight. Nothing to defend yourslef with. Game over." << "\n";
					return (0);
					alive = false;
				}
			}
			cout << "\nWould you like to go south(s) or west (w) " << "\n\n";
			cin >> ans;
			if (ans == 'w' || ans == 'W') {
				room2 = true;
				room3 = false;
			}
			if (ans == 's' || ans == 'S') {
				room6 = true;
				room3 = false;
			}
		}

		//room 4
		if (room4 == true) {
			cout << "\nYou walk into a room full of crates. There are a couple of sticks sticking out\n";
			cout << "of one of them. Would you like to examine closer? Yes(y) or no(n)?" << "\n\n";
			cin >> ans;
			if (ans == 'y' || ans == 'Y') {
				stilts = true;
				cout << "\nWow. Stilts. Helpful... " << "\n";
			}
			cout << "\nWould you like to go south(s), east(e) or north(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'e' || ans == 'E') {
				room5 = true;
				room4 = false;
			}
			if (ans == 's' || ans == 'S') {
				room7 = true;
				room4 = false;
			}
			if (ans == 'n' || ans == 'N') {
				room1 = true;
				room4 = false;
			}
		}

		//room 5
		if (room5 == true) {
			cout << "\nYou walk into a room filled with tools. You pick up a pickaxe. It could\n";
			cout << "potentially be useful." << "\n";
			pickaxe = true;
			cout << "Would you like to go south(s), east(e) or north(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'e' || ans == 'E') {
				room6 = true;
				room5 = false;
			}
			if (ans == 's' || ans == 'S') {
				room8 = true;
				room5 = false;
			}
			if (ans == 'n' || ans == 'N') {
				room2 = true;
				room5 = false;
			}
		}

		//room 6
		if (room6 == true) {
			if (stilts == false) {
				cout << "\nThe new room is filled with shelves. There is something shining on the top shelf..." << "\n\n";
			}
			else if (stilts == true) {
				cout << "\nThe new room is filled with shelves. Something is shining on the top shelf. You put on your stilts to see what it is. You find a shiny diamond. Wow.. \n";
				cout << "the hardest mineral on planet Earth.." << "\n\n";
				diamond = true;
			}
			cout << "Would you like to go south(s), east(e) or north(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'w' || ans == 'W') {
				room5 = true;
				room6 = false;
			}
			if (ans == 's' || ans == 'S') {
				room9 = true;
				room6 = false;
			}
			if (ans == 'n' || ans == 'N') {
				room3 = true;
				room6 = false;
			}
		}

		//room 7
		if (room7 == true) {
			if (beenthere == false) {
				cout << "\nYou see a sword in the middle of the room. You must answer a skill testing";
				cout << "question in order to get the sword.What is 3x3 + 4 / 2 ? " << "\n";
				cout << "a) 11" << "\n";
				cout << "b) 15" << "\n";
				cout << "c) 6" << "\n";
				cout << "d) 7.5" << "\n\n";
				cin >> ans1;
				if (ans1 == "a" || ans1 == "A") {
					sword = true;
					cout << "\nCorrect. " << "\n";
					beenthere = true;
				}
				else {
					cout << "Wrong! no sword for you. " << "\n";
					beenthere = true;
				}
			}
			if (beenthere == true && sword == true) {
				cout << "You already have the sword. This room is empty now. " << "\n";
			}
			if (beenthere == true && sword == false) {
				cout << "You only get one attempt at the trivia question. Sorry. " << "\n";
			}
			cout << "Would you like to go east(e) or north(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'e' || ans == 'E') {
				room8 = true;
				room7 = false;
			}
			if (ans == 'n' || ans == 'N') {
				room4 = true;
				room7 = false;
			}
		}

		//room 8
		if (room8 == true) {
			cout << "\nYou walk into a room filled with wood planks and chests. You open a chest and\n";
			cout << "find a flashlight." << "\n";
			flashlight = true;
			cout << "Would you like to go west(w), east(e) or north(n)? " << "\n\n";
			cin >> ans;
			if (ans == 'w' || ans == 'W') {
				room7 = true;
				room8 = false;
			}
			if (ans == 'e' || ans == 'E') {
				room9 = true;
				room8 = false;
			}
			if (ans == 'n' || ans == 'N') {
				room5 = true;
				room8 = false;
			}
		}

		//room 9
		if (room9 == true) {
			if (key == false) {
				cout << "\nThere is a door to the ouside but you need the key..." << "\n";
				cout << "Would you like to go west(w) or north(n)? " << "\n\n";
				cin >> ans;
				if (ans == 'w' || ans == 'W') {
					room8 = true;
					room9 = false;
				}
				if (ans == 'n' || ans == 'N') {
					room6 = true;
					room9 = false;
				}
			}
			if (key == true) { //game over when you find the dead body
				cout << "\nYou use the key to exit the warehouse. The dead body is sitting in front of you with a sign saying, You're Next! All of a sudden you are attacked. You lose all feeling in your body..  " << "\n";
				cout << "Game Over. " << "\n";
				system("PAUSE");
				alive = false;
				exit(0);
			}
		}
	}

	return 0;
}