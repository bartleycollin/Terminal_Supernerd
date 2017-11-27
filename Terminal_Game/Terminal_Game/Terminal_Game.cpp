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

//===============================================================================================================================================================   type()    //Ian

void type(string str)
{
	int randomNum;
	cout << "User 162: ";
	Sleep(500);
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		cout << str[i];
		Sleep(randomNum);
	}
	cout << endl;
	Sleep(1000);
}

//====================================================================================================================================================================   typeMoore()    //Ian and Collin

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

//===================================================================================================================================================================================   wire()    //Ian

bool wire()
{
	string choice = "This is some nice placeholder text amirite";
	bool progress = false;
	Sleep(50);

	cout << "\n\n\n*You notice the lights in the room begin to flicker, and soon realize the artificial gravity is beginning to fail as well. \nGood thing the computer has an internal power supply*\n\n";
	while (choice != "1" && choice != "2" && choice != "3")
	{
		cout << "Choose a message to send below.\n";
		cout << "1 - 'What's going  on! I'm beginning to float and the lights are flickering!'\n";
		cout << "2 - 'I think the power in here is beginning to fail! What should I do?'\n";
		cout << "3 - 'Well, everything seems fine up here.'\n";
		cin >> choice;

		if (choice == "1")
		{
			type("What's going  on! I'm beginning to float and the lights are flickering!");
			cout << "Cpt. Moore: Listen closely. Can you hear the air vents or any noises from the ship at all?\n";
			Sleep(1000);
			cout << "\n*You listen and hear no noise from the air vents, and, after quickly scanning the room, you notice you neither hear nor see the electronics beeps from various panels.*";
			while (choice != "1" && choice != "2")
			{
				Sleep(100);
				cout << "Choose a message to send below.\n";
				cout << "1 - 'I don't hear anything besides my breathing'\n";
				cout << "2 - 'It's too quiet in here. Wayt too quiet'\n";
				cin >> choice;
				if (choice == "1")
				{
					type("I don't hear anything besides my breathing");
					cout << "\nCpt. Moore: Whoa, that must mean the power is going out! Head to the generator room and try to find the problem.";
					progress = true;
				}
				else if (choice == "1")
				{
					type("It's too quiet in here. Wayt too quiet");
					cout << "Cpt. Moore: That's what I was afraid of. The power must be going out. Head to the generator room and see if you can fix the problem.";
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
			type("I think the power in here is beginning to fail! What should I do?");
			cout << "\nCpt. Moore: Are you sure. Can you hear the air vents or any noises from the ship at all?";
			Sleep(100);
			cout << "\n*You listen and hear no noise from the air vents, and, after quickly scanning the room, you notice you neither hear nor see the electronics beeps from various panels.*";
			while (choice != "1" && choice != "2")
			{
				Sleep(10);
				cout << "Choose a message to send below.\n";
				cout << "1 - 'I don't hear anything besides my breathing'\n";
				cout << "2 - 'It's too quiet in here. Wayt too quiet'\n";
				cin >> choice;
				if (choice == "1")
				{
					cout << "\nCpt. Moore: That confirms it. Head to the generator room and try to find the source of the problem.";
					progress = true;
				}
				else if (choice == "1")
				{
					cout << "Cpt. Moore: That's what I was afraid of. Head to the generator room and see if you can fix the problem.";
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
			type("Well, everything seems fine up here.");
			cout << "Cpt. Moore: Are you sure? Are you being sarcastic and the ship's actually exploding? What's going on?\n";
			cout << "Choose a message to send below.\n";
			cout << "1 - 'No I'm completely serious. Everythings tooootally fiiine. No sarcasm at all.'\n";
			cout << "2 - 'What gives you that idea? My sarcastic text?";
			cout << "3 - 'I'm being dead honest. I'll tell you if I need anything'\n";

		}
	}
	return 0;
}



//========================================================================================================================================================================   main()

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

