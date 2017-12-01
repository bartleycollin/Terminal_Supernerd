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
bool spacevac();
//==============================================================================   error()    //Ian

void error()
{
	cout << "Invalid input. Please input the number of the corrosponding choice";
}

//===============================================================================================================================================================   pushX() //Collin from Stack Overflow

void pushX(int num)
{
	for (int i = 0;i<num;i++)
		cout << " ";
}

//===============================================================================================================================================================   type()  //Ian

void type(string str)
{
	int randomNum;
	int c = 0;
	bool newl = false;
	Sleep(500);
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		c++;
		if (newl && str[i] == ' ')
		{
			cout << "\n";
			newl = false;
			c = 0;
		}
		else if (c >= 150 && !newl)
		{
			newl = true;
			cout << str[i];
		}
		else
		{
			cout << str[i];
		}
		Sleep(randomNum);
	}
	cout << endl;
	Sleep(1000);
}

//===============================================================================================================================================================   typeEvent() //Ian


void typeEvent(string str)
{
	int c = 0;
	bool newl = false;
	str = ("\n\n*" + str + "*");
	for (int i = 0; i < str.length(); i++)
	{
		c++;
		if (newl && str[i] == ' ')
		{
			cout << "\n";
			newl = false;
			c = 0;
		}
		else if (c >= 150 && !newl)
		{
			newl = true;
			cout << str[i];
		}
		else
		{
			cout << str[i];
		}
	}
	cout << endl;
}


//===============================================================================================================================================================   typeUser()    //Ian

void typeUser(string str)
{
	int randomNum;
	int c = 0;
	bool newl = false;
	str = ("User 162:" + str);
	Sleep(500);
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		c++;
		if (newl && str[i] == ' ')
		{
			cout << "\n";
			newl = false;
			c = 0;
		}
		else if (c >= 150 && !newl)
		{
			newl = true;
			cout << str[i];
		}
		else
		{
			cout << str[i];
		}
		Sleep(randomNum);
	}
	cout << endl;
	Sleep(1000);
}

//=================================================================================   typeMoore()    //Ian and Collin

void typeMoore(string str)
{
	int c = 0;
	bool newl = false;
	str = ("Cpt. Moore: " + str);
	for (int i = 0; i < str.length(); i++)
	{
		c++;
		if (newl && str[i] == ' ')
		{
			cout << "\n";
			newl = false;
			c = 0;
		}
		else if (c >= 150 && !newl)
		{
			newl = true;
			cout << str[i];
		}
		else
		{
			cout << str[i];
		}
	}
	cout << endl;
}

//=================================================================================   introduction()    //Collin

void introduction() {
}

//===================================================================================================================================================================================   wire()    //Ian

bool wire()
{
	string choice = "This is some nice placeholder text amirite";
	bool progress = false;
	bool failure = false;
	int annoyance = 0;
	Sleep(500);

	cout << "\n\n\n*You notice the lights in the room begin to flicker, and soon realize the artificial gravity is beginning to fail as well. \nGood thing the computer has an internal power supply*\n\n";
	while (!progress && !failure)
	{
		cout << "Choose a message to send below.\n";
		cout << "1 - 'What's going  on! I'm beginning to float and the lights are flickering!'\n";
		cout << "2 - 'I think the power in here is beginning to fail! What should I do?'\n";
		cout << "3 - 'Well, everything seems fine up here.'\n";
		cin >> choice;

		if (choice == "1")
		{
			typeUser("What's going  on! I'm beginning to float and the lights are flickering!");
			typeMoore("Listen closely. Can you hear the air vents or any noises from the ship at all?\n");
			Sleep(1000);
			cout << "\n*You listen and hear no noise from the air vents, and, \nafter quickly scanning the room, you notice you neither hear nor see the electronics beeps from various panels.*";
			choice = "0";
			while (choice != "1" && choice != "2")
			{
				Sleep(100);
				cout << "Choose a message to send below.\n";
				cout << "1 - 'I don't hear anything besides my breathing'\n";
				cout << "2 - 'It's too quiet in here. Wayt too quiet'\n";
				cin >> choice;
				if (choice == "1")
				{
					typeUser("I don't hear anything besides my breathing");
					typeMoore("Whoa, that must mean the power is going out! Head to the generator room and try to find the problem.");
					progress = true;
				}
				else if (choice == "2")
				{
					typeUser("It's too quiet in here. Wayt too quiet");
					typeMoore("That's what I was afraid of. The power must be going out. Head to the generator room and see if you can fix the problem.");
					progress = true;
				}
				else
				{
					error();
				}
			}
		}

		else if (choice == "2")
		{
			typeUser("I think the power in here is beginning to fail! What should I do?");
			typeMoore("Are you sure. Can you hear the air vents or any noises from the ship at all?");
			Sleep(1000);
			cout << "\n*You listen for a few seconds and hear no noise from the air vents, \nand, after quickly scanning the room, you notice you neither\n hear nor see the electronics beeps from various panels.*";
			choice = "0";
			while (choice != "1" && choice != "2")
			{
				Sleep(10);
				cout << "Choose a message to send below.\n";
				cout << "1 - 'I don't hear anything besides my breathing'\n";
				cout << "2 - 'It's too quiet in here. Wayt too quiet'\n";
				cin >> choice;

				if (choice == "1")
				{
					typeUser("I don't hear anything besides my breathing");
					typeMoore("That confirms it. Head to the generator room and try to find the source of the problem.");
					progress = true;
				}
				else if (choice == "2")
				{
					typeUser("It's too quiet in here. Wayt too quiet");
					typeMoore("That's what I was afraid of. Head to the generator room and see if you can fix the problem.");
					progress = true;
				}
				else
				{
					error();
				}
			}
		}

		else if (choice == "3")
		{
			typeUser("Well, everything seems fine up here.");
			cout << "Cpt. Moore: Are you sure? Are you being sarcastic and the ship's actually exploding? What's going on?\n";
			choice = "0";
			while (choice != "1" && choice != "2" && choice != "3")
			{
				cout << "Choose a message to send below.\n";
				cout << "1 - 'No I'm completely serious. Everythings tooootally fiiine. No sarcasm at all.'\n";
				cout << "2 - 'What gives you that idea? My sarcastic text?";
				cout << "3 - 'I'm being dead honest. I'll tell you if I need anything'\n";
				cin >> choice;

				if (choice == "1")
				{
					typeUser("No I'm completely serious. Everythings tooootally fiiine. No sarcasm at all.");
					cout << "Cpt. Moore: Care to tell me what's really going on up there?\n";
					annoyance++;
				}
				else if (choice == "2")
				{
					typeUser("What gives you that idea? My sarcastic text?");
					cout << "Cpt. Moore: Noooooooo. I can just naturally hear your sarcastic voice from thousands of miles away.\n";
					annoyance++;
				}
				else if (choice == "3")
				{
					typeUser("I'm being dead honest. I'll tell you if I need anything");
					cout << "Cpt. Moore: For some reason, I find that highly unlikely, but if you insist...\n";
					failure = true;
				}
				else
				{
					error();
				}
			}
		}
		else
		{
			error();
		}
		if (annoyance >= 3)
		{
			failure = true;
		}
	}

	if (!failure)
	{
		cout << "Cpt. Moore: Don't forget to turn on the computer in when you get to the power room\n so I can help talk you through any problems you come across.\n";
		Sleep(2000);
		system("CLS");
	}
	return failure;
}



//==============================================================================   freeze()    //Collin
//This is the scenario called 'Freeze'. Made by Collin. 

bool freeze() {
	string choice;
	Sleep(50);

	cout << "\n\n\n*The heat systems are offline. Ice crystals slowly begin to form on the walls. Your breath creates fog as you exhale. Things are about get to cold.*\n\n";
	cout << "Choose a message to send below.\n";
	cout << "1 - 'Captain, I think the heat is offline. I need help quickly.'\n";
	cout << "2 - 'I'm going to run down and check on the heat systems.'\n";
	cin >> choice;

	if (choice == "1")
	{
		type("Captain, I think the heat is offline. I need help quickly.");
		typeMoore("It looks like you're right. I need you to run down to where the systems are and check a few things. Are you ready for your instructions?");
		cout << "Choose a message to send below.\n";
		while (choice != "1") {
			cout << "1 - 'Yes, go ahead.'\n";
			cin >> choice;
			if (choice == "1")
			{
				//continue story
			}
		}
	}

	if (choice == "2")
	{
		type("I'm going to run down and check on the heat systems.");
		typeMoore("It seems like you know what you're doing. Do you need anything before you go?.");

		cout << "Choose a message to send below.\n";
		while (choice != "1" && choice != "2") {
			cout << "1 - 'If you could give me some instructions that would help.'\n";
			cout << "2 - 'I'm fine. Be back shortly.'\n";
			cin >> choice;
		}
	}
	return 0;
}

//========================================================================================================================================================================   main()

int main()
{
	system("mode 650"); // found on stack overflow, makes console windowed fullscreen, Zach
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
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

	string choice;
	Sleep(50);

	//=================================================================================   introduction   //Collin
	type("\n\n\n*WELCOME TO TERMINAL*\n\n");
	type("You are alone on a spaceship. A dusty old terminal is your only lifeline. Communicate with Cpt. Moore, and make your choices wisely.");
	while (choice != "1" && choice != "2") {
		cout << "Are you ready to play?.\n";
		cout << "1 - 'Let's go!'\n";
		cout << "2 - 'Quit Game.'\n";
		cin >> choice;

		if (choice == "1")
		{
			freeze();
		}
	}

	system("pause");
    return 0;
}

//Test Commit - 2:29pm 11/13/17
//Test Commit - 3:12pm 11/13/17

