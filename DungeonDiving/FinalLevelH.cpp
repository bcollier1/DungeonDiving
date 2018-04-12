//Group Assignment
//Date - 
//Name - HJ-L

//include library
#include "stdafx.h"
#include <iostream>
#include <limits.h>
#include <stdio.h>
#include "eroom.h"

using namespace std;

//The Board
char print(char board[25][23]);
		char board[25][23]=
{{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //0
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //1
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //2
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'o', 'x', 'o', 'o', 'o', 'x'}, //3
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'x', 'o', 'x', 'x', 'x'}, //4
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o'}, //5
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'x', 'x', 'x', 'x'}, //6 
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //7 
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'x'}, //8
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //9 
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //10
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //11
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //12
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //13
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //14
{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //15
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //16
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //17
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x'}, //18
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'x', 'x', 'o', 'o', 'o', 'x'}, //19
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //20
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //21
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //22
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //23
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}}; //24


//Declare Vars
int x = 24;
int y = 1;
int chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, hkey (0);
int points (0);
int ans;

//Voids 
void Room_One()
{
	if (chest1 == 0) //Enter the room for the first time/haven't opened the chest
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There are two exits one to the right and one up.\n";
		cout << "[1] Go Right\n";
		cout << "[2] Go Up\n";
		cout << "[3] Open Chest\n";
		cin >> ans;
		}
		else if (chest1 == 1) //Enter the room after you've opened the chest
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There are two exits one to the right and one up.\n";
			cout << "[1] Go Right\n";
			cout << "[2] Go Up\n";
			cin >> ans;
			}		
	if (ans == 3 && chest1 == 0) //Open the chest and get the points
		{
			points++;
			chest1 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 3 && chest1 == 1) // You've already open the chest. so they can just keep collecting points
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1) //Setting the x and y to right option
		{
			x = 23;
			y = 13;
		}
	if (ans == 2) //Setting the x and y to the up option
		{
			x = 17;
			y = 8;
			
		}
	if (ans != 1 && ans != 2 && ans != 3) //If anything except the options it gives you another chance
		{
			cout << "That's not an option.\n";
		}
}

void Room_Two()
{
	if (chest2 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There are two exits one up and one to the left.\n";
		cout << "[1] Go Up\n";
		cout << "[2] Go Left\n";
		cout << "[3] Open Chest\n";
		cin >> ans;
		}
		else if (chest2 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There are two exits one up and one to the left.\n";
			cout << "[1] Go Up\n";
			cout << "[2] Go Left\n";
			cin >> ans;
			}		
	if (ans == 3 && chest2 == 0)
		{
			points++;
			chest2 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 3 && chest2 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1) //up
		{
			x = 18;
			y = 19;
		}
	if (ans == 2) //left
		{
			x = 23;
			y = 16;
		}
	if (ans != 1 && ans != 2 && ans != 3)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Three()
{
	if (chest3 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit to the right.\n";
		cout << "[1] Go Right\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (chest3 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit to the right.\n";
			cout << "[1] Go Right\n";
			cin >> ans;
			}		
	if (ans == 2 && chest3 == 0)
		{
			points++;
			chest3 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && chest3 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 18; 
			y = 16;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Four()
{
	if (chest4 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit to the left.\n";
		cout << "[1] Go Left\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (chest4 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit to the left.\n";
			cout << "[1] Go Left\n";
			cin >> ans;
			}		
	if (ans == 2 && chest4 == 0)
		{
			points++;
			chest4 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && chest4 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 16;
			y = 14;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Five()
{
	if (chest5 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There are two exits one to the right and one up.\n";
		cout << "[1] Go Right\n";
		cout << "[2] Go Up\n";
		cout << "[3] Open Chest\n";
		cin >> ans;
		}
		else if (chest5 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There are two exits one to the right and one up.\n";
			cout << "[1] Go Right\n";
			cout << "[2] Go Up\n";
			cin >> ans;
			}		
	if (ans == 3 && chest5 == 0)
		{
			points++;
			chest5 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 3 && chest5 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 13;
			y = 8;
		}
	if (ans == 2)
		{
			x = 12;
			y = 1;
		}
	if (ans != 1 && ans != 2 && ans != 3)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Six()
{
	if (chest6 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit to the right.\n";
		cout << "[1] Go Right\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (chest6 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit to the right.\n";
			cout << "[1] Go Right\n";
			cin >> ans;
			}		
	if (ans == 2 && chest6 == 0)
		{
			points++;
			chest6 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && chest6 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 9;
			y = 8;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Seven()
{
	if (chest7 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit to the right.\n";
		cout << "[1] Go Right\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (chest7 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit to the right.\n";
			cout << "[1] Go Right\n";
			cin >> ans;
			}		
	if (ans == 2 && chest7 == 0)
		{
			points++;
			chest7 ++;
			cout << "You get one point from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && chest7 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 4;
			y = 11;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Eight()
{
	if (chest8 == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit down\n";
		cout << "[1] Go Down\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (chest8 == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit down\n";
			cout << "[1] Go Down\n";
			cin >> ans;
			}		
	if (ans == 2 && chest8 == 0)
		{
			points++;
			chest8 ++;
			cout << "You got one point for opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && chest8 == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{
			x = 3; 
			y = 15;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}

void Room_Key()
{
	if (hkey == 0)
	{
		cout << "You enter an barren room with one large chest in the middle\n";
		cout << "There is one exit to the left.\n";
		cout << "[1] Go Left\n";
		cout << "[2] Open Chest\n";
		cin >> ans;
		}
		else if (hkey == 1)
		{
			cout << "You enter an barren room with an open chest in the middle.\n";
			cout << "There is one exit to the left.\n";
			cout << "[1] Go Left\n";
			cin >> ans;
			}		
	if (ans == 2 && hkey == 0)
		{
			points++;
			hkey ++;
			cout << "You get a key from opening the chest.\n";
			cin >> ans;
		}
		else if (ans == 2 && hkey == 1)
			{
			cout << "That's not an option.\n";
		}
	if (ans == 1)
		{ 
			x = 5;
			y = 2;
		}
	if (ans != 1 && ans != 2)
		{
			cout << "That's not an option.\n";
		}
}


//main function
int hmain()
{
//Board again
		char board[25][23]=
{{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //0
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //1
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //2
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'o', 'x', 'o', 'o', 'o', 'x'}, //3
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'x', 'o', 'x', 'x', 'x'}, //4
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o'}, //5
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'x', 'x', 'x', 'x'}, //6 
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //7 
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'x'}, //8
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //9 
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //10
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //11
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x'}, //12
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //13
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //14
{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //15
{'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //16
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}, //17
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x'}, //18
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'x', 'x', 'o', 'o', 'o', 'x'}, //19
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //20
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'o', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //21
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'x'}, //22
{'x', 'o', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x'}, //23
{'x', 'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}}; //24
//0,   1   2    3   4    5   6    7   8    9  10  11  12  13  14 15  16  17  18  19 20  21  22

//Starting place in the game
board[x][y] = '?';
	
	//Main loop
	for(int i=0;/*x<100*/;i++){
            print(board); 
            char direction; //var for the wasd controls
			int hkey (0);
            cin >> direction;
				if (x == 3 && y == 22 && hkey == 1 && direction == 'd') //Reaching the end with the key
					{
						cout << "You have reached the exit and you have the key you can move on to the next room.\n";
						//next persons level
					}
				else if (direction == 'd' && x == 5 && y == 22) //Reaching the end without the key
					{
						cout << "You have reached the exit but the door is locked so you need to find a key before you can leave. \n";
					}
				else if (direction == 's' && x == 17 && y == 8) //To room one
					{
						board[x][y] = 'o'; //The space you were before cleared to o
						Room_One(); //Send you to Room_One void
						board[x][y] = '?'; //You new (x,y) to a ?
					}
				else if (direction == 'a' && x == 23 && y ==13)
					{
						board[x][y] = 'o';
						Room_One();
						board[x][y] = '?';
					}
				else if (direction == 'd' && x == 23 && y == 16)
					{
						board[x][y] = 'o';
						Room_Two();
						board[x][y] = '?';
					}
				else if (direction == 's' && x == 18 && y == 19)
					{
						board[x][y] = 'o';
						Room_Two();
						board[x][y] = '?';
					}
				else if (direction == 'a' && x == 18 && y ==16)
					{
						board[x][y] = 'o';
						Room_Three();
						board[x][y] = '?';
					}
				else if (direction == 'd' && x == 16 && y == 14)
					{
						board[x][y] = 'o';
						Room_Four();
						board[x][y] = '?';
					}
				else if (direction == 'a' && x == 13 && y == 8)
					{
						board[x][y] = 'o';
						Room_Five();
						board[x][y] = '?';
					}
				else if (direction == 's' && x == 12 && y == 1)
					{
						board[x][y] = 'o';
						Room_Five();
						board[x][y] = '?';
					}
				else if (direction == 'a' && x == 9 && y == 8)
					{
						board[x][y] = 'o';
						Room_Six();
						board[x][y] = '?';
					}
				else if (direction == 'a' && x == 4 && y == 11)
					{
						board[x][y] = 'o';
						Room_Seven();
						board[x][y] = '?';
					}
				else if (direction == 'w' && x == 3 && y == 15)
					{
						board[x][y] = 'o';
						Room_Eight();
						board[x][y] = '?';
					}
				else if (direction == 'd' && x == 5 && y == 2)
					{
						board[x][y] = 'o';
						Room_Key();
						board[x][y] = '?';
					}
				else if (direction=='w' && board [x-1][y]== 'o') //Up direction if the space above it is a o
				{
					board[x][y]='o'; //Old (x,y) to a o
					x=x-1; // Take one away from the (x,y)
					board[x][y]='?'; //New (x,y) to a ?
					}
				else if (direction == 's' && board [x+1][y]== 'o') //Down
				{
					board[x][y]='o'; 
					x=x+1; 
					board[x][y]='?'; 
					}
				else if (direction == 'a' && board [x][y-1]== 'o') //Left
				{
					board[x][y]='o';
					y=y-1;
					board[x][y]='?';
					}
				else if (direction == 'd' && board [x][y+1]== 'o') //Right
				{
					board[x][y]='o';
					y=y+1;
					board[x][y]='?';
					}
				else {
					cout << "Please enter the correct controls \n";
					}
				} 


    return 0;
}

char print(char board[25][23]){
     system ("cls");
     for(int i=0;i<25;i++){
             for(int j=0;j<23;j++){
                     cout << board[i][j];
                     }
                     cout << "\n"; 
             }
	 return 0;
} 
