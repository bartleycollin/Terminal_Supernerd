// Terminal_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "time.h"
#include "windows.h"

using namespace std;

bool wire();

//==============================================================================   pushX() //Collin from Stack Overflow

void pushX(int num)
{
	for (int i = 0;i<num;i++)
		cout << " ";
}

//==============================================================================   type()    //Ian

void type(string str)
{
	int randomNum;
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		cout << str[i];
		Sleep(randomNum);
	}
	cout << endl;
}

//==============================================================================   typeMoore()    //Ian and Collin

void typeMoore(string str)
{
	int randomNum;
	str = ("Cpt. Moore: " + str);
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		cout << str[i];
		Sleep(randomNum);
	}
	cout << endl;
}

void introduction() {
	string choice;
	Sleep(50);

	cout << "\n\n\n*WELCOME TO TERMINAL*\n\n";
	cout << "Are you ready to play?.\n";
	cout << "1 - 'Let's go!'\n";
	cout << "2 - 'Quit Game.'\n";
	cin >> choice;

	if (choice == "1")
	{
		wire();
	}
}

//==============================================================================   wire()    //Ian
//stuff
bool wire()
{
	string choice;
	Sleep(50);

	cout << "\n\n\n*You notice the lights in the room begin to flicker, and soon realize the artificial gravity is beginning to fail as well.*\n\n";
	cout << "Choose a message to send below.\n";
	cout << "1 - 'What's going  on! I'm beginning to float and the lights are flickering!'\n";
	cout << "2 - 'I think the power in here is beginning to fail! What should I do?'\n";
	cout << "3 - 'Well, everything seems fine up here.'\n";
	cin >> choice;
	
	if (choice == "1")
	{
		type("What's going  on! I'm beginning to float and the lights are flickering!");
	}

	if (choice == "2")
	{
		type("I think the power in here is beginning to fail! What should I do?");
	}

	if (choice == "3")
	{
		type("Well, everything seems fine up here.");
	}
	return 0;
}



//===============================================================================   main()

int main()
{
	type("Whoa!");

	//Collin
	for (int j = 0;j<75;j++) {
		system("CLS");
		pushX(j);
		cout << " ___________ ______   ______     ___  ___   __   __   __       ___       __ " << endl;
		pushX(j);
		cout << "|           |   ____||   _  \\   |   \\/   | |  | |  \\ |  |     /   \\     |  |" << endl;
		pushX(j);
		cout << "`---|  |----|  |__   |  |_)  |  |  \\  /  | |  | |   \\|  |    /  ^  \\    |  |" << endl;
		pushX(j);
		cout << "    |  |    |   __|  |      /   |  |\\/|  | |  | |  . `  |   /  /_\\  \\   |  | " << endl;
		pushX(j);
		cout << "    |  |    |  |____ |  |\\  \\---|  |  |  | |  | |  |\\   |  /  _____  \\  |  `----." << endl;
		pushX(j);
		cout << "    |__|    |_______|| _| `.____|__|  |__| |__| |__| \\__| /__/     \\__\\ |_______|" << endl;
		/* 
 ___________ ______   ______     ___  ___   __   __   __       ___       __      
|           |   ____||   _  \   |   \/   | |  | |  \ |  |     /   \     |  |     
`---|  |----|  |__   |  |_)  |  |  \  /  | |  | |   \|  |    /  ^  \    |  |     
    |  |    |   __|  |      /   |  |\/|  | |  | |  . `  |   /  /_\  \   |  |     
    |  |    |  |____ |  |\  \---|  |  |  | |  | |  |\   |  /  _____  \  |  `----.
    |__|    |_______|| _| `.____|__|  |__| |__| |__| \__| /__/     \__\ |_______|*/
		Sleep(10);
	}

	for (int i = 0; i < 237; i++)
	{
		cout << "=";
	}

	introduction();

	system("pause");
    return 0;
}

//Test Commit - 2:29pm 11/13/17
//Test Commit - 3:12pm 11/13/17

