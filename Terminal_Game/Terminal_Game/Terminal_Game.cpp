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

//=================================================================================   typeMoore()    //Ian and Collin

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

//=================================================================================   introduction()    //Collin

void introduction() {
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
					type("I don't hear anything besides my breathing");
					cout << "\nCpt. Moore: Whoa, that must mean the power is going out! Head to the generator room and try to find the problem.";
					progress = true;
				}
				else if (choice == "2")
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
			choice = "0";
			while (choice != "1" && choice != "2" && choice != "3")
			{
				cout << "Choose a message to send below.\n";
				cout << "1 - 'No I'm completely serious. Everythings tooootally fiiine. No sarcasm at all.'\n";
				cout << "2 - 'What gives you that idea? My sarcastic text?";
				cout << "3 - 'I'm being dead honest. I'll tell you if I need anything'\n";
				cin >> choice;
			}
			if (choice == "1")
		}
		else
		{
			error();
		}
	}
	return 0;
}
// space vacuum event //Zach
bool spacevac()
{
	string choice;
	string choice1;
	string choice2;
	Sleep(50);

	cout << "\n\n\n*A red warning light alarms you that a crack has formed from the pressure outside, slowly depleting your oxygen supply.*\n\n";
	Sleep(1000);
	cout << "What will you send Commander?\n";
	cout << "1 - 'The pressure from space cracked the ships hull, I'm losing oxygen!'\n";
	cout << "2 - 'What is happening? There is a red warning light!'\n";
	cout << "3 - 'Did you happen to catch the episode of 'Friends' last night?'\n";
	cin >> choice;

	if (choice == "1") // choice 1
	{
		type("The pressure from space cracked the ships hull, I'm losing oxygen!");
		typeMoore("You will need to find a way to patch the crack! The ship is made from reinforced steel, you'll need to find something just as strong!");
		type("Where should I check for such items?\n");
		typeMoore("I'd probably go to the torch and scrap metal store.\n");
		type("Commander please...\n");
		typeMoore("Come on, have a sense of humor. Check the stoarge room. You will find extra materials in there.\n");
		Sleep(250);
		cout << "*You run to the storage room and find some scrap metal. It isn't the same metal, but it will have to do.*\n";
		Sleep(250);
		cout << "*Once identifying the crack, you seal it with the materials and return to the terminal to update Moore.*\n";
		Sleep(250);
		type("I patched it, but please, next time i'm in a life or death situation, just help.");
		typeMoore("Did the torch and scrap metal store have any good sales?\n");
	}

	else if (choice == "2") // choice 2
	{
		type("What is happening? There is a red warning light!");
		typeMoore("Your ship is losing it's oxygen supply, you need to find the crack and patch it!");
		type("Where can I find such maetrial?");
		typeMoore("Look in the closet down the hall, I believe we have extras in there!");
		cout << "*You run down the hall frantically in search of something that will help.*\n";
		Sleep(250);
		cout << "*While checking the closet, you find a torch, but not any material that is useful.*\n";
		Sleep(250);
		cout << "*There are two other places to check. The cargo bay or flight deck?*" << endl;
		Sleep(100);
		cout << "1 - Check the cargo bay for extra materials." << endl;
		cout << "2 - Check the flight deck for anything that could help." << endl;
		cin >> choice1;
		if (choice1 == "1")
		{
			Sleep(500);
			cout << "*You run to the cargo bay in hopes of finding something to use.*\n";
			Sleep(500);
			cout << "*You find a piece of scrap metal. It should work!*\n";
			Sleep(100);
			cout << "*You find the crack and seal it without losing too much oxygen.*\n";
		}

		else if (choice1 == "2")
		{
			Sleep(1000);
			cout << "*You check out the flight deck.*\n";
			Sleep(500);
			cout << "Alas, you find nothing, you check the cargo bay next.\n";
			choice1 == "1";
		}
		else if (choice1 != "1" || choice1 != "2")
		{
			error();
		}
	}

	else if (choice == "3") // choice 3
	{
		type("Did you happen to catch the episode of 'Friends' last night?");
		typeMoore("I did, Ross was great!");
		typeMoore("Is everything okay? I just got an alert from your ship./n");
		Sleep(1000);
		cout << "1 - 'Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.\n";
		cout << "2 - 'I'll be honest Commander, I just woke up from a nap and don't really know where I am.\n";
		cout << "3 - 'Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.\n";
		cin >> choice2;

		if (choice2 == "1")
		{
			type("Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.\n");
			typeMoore("...\n");
			typeMoore("Well okay, if anything does happen, be sure to alert me. I'm sending the feed right now.\n");
			type("I'll let you know Commander. Thank you.");
			cout << "*You die from lack of oxygen, and before the end of the episode, how sad.*" << endl;
		}

		else if (choice2 == "2")
		{
			type("I'll be honest Commander, I just woke up from a nap and don't really know where I am.\n");
			typeMoore("I'm getting an alert from your ships IP, is everything okay up there?\n");
			type("Everything seems to be fine, there is a rave going on though.\n");
			typeMoore("No, no, no. There's a breach in the hull. You're losing oxygen, you need to act quickly.\n");
			type("5 more minutes?\n");
			typeMoore("It's your life.\n");
			type("Fine, I'll check the supplies closet.\n");
			cout << "*You run to the closet and find the materials and patch the crack.\n" << endl;
			Sleep(250);
			typeMoore("The alert has settled, good job.\n");
			type("Thanks Commander, see, I got everything undercontrol.\n");
		}

		else if (choice2 == "3")
		{
			type("Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.\n");
			typeMoore("You do understand that you are the only person on the ship, right?\n");
			type("You never know, these aliens are shifty.\n");
			typeMoore("You've found extraterrestrial life? We need to report this! Why didn't you tell me this before?\n");
			type("I've said too much. I must go.\n");
			Sleep(1000);
			typeMoore("...\n");
			Sleep(1000);
			typeMoore("What? Come back here, now!\n");
		}

		else if (choice2 != "1" || choice2 != "2" || choice2 != "3")
		{
			error();
		}

		else if (choice != "1" || choice != "2" || choice != "3")
		{
			error();
		}
	}
	return 0;
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

	cout << "\n\n\n*WELCOME TO TERMINAL*\n\n";
	cout << "You are alone on a spaceship. A dusty old terminal is your only lifeline. Communicate with Cpt. Moore, and make your choices wisely.\n";
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

