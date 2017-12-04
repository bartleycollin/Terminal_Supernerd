// Terminal_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "time.h"
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool wire();
bool spacevac();
bool freeze();
//==============================================================================   error()    //Ian

void error()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "Invalid input. Please input the number of the corrosponding choice";
}

void randFunction() // zach, function picks random number 1 - 5 and each number is assigned to a function or scenario 
{
	int num;
	srand(time(NULL));
	num = rand() % 3 + 1;

	if (num == 1)
	{
		wire();
	}
	if (num == 2)
	{
		spacevac();
	}
	if (num == 3)
	{
		freeze();
	}
}
void death() // zach, function makes it easier for developers to say the player has died 
{
	bool tf = true;
	int c;
	while (tf = true)
	{
		typeEvent("You have died.");
		typeEvent("Thank you for playing.");
		type("Try again?");
		cout << "1 - Yes, lets go!" << endl;
		cout << "2 - No, I am done." << endl;
		cin >> c;

		if (c == 1)
		{

		}

		if (c == 2)
		{
			break;
		}
	}
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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 02);
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

// space vacuum event //Zach
bool spacevac()
{
	string choice;
	string choice1;
	string choice2;
	string choice3;
	Sleep(50);

	typeEvent("A red warning light alarms you that a crack has formed from the pressure outside, slowly depleting your oxygen supply.");
	Sleep(1000);
	typeEvent("What will you send Commander?");
	cout << "1 - 'The pressure from space cracked the ships hull, I'm losing oxygen!'\n";
	cout << "2 - 'What is happening? There is a red warning light!'\n";
	cout << "3 - 'Did you happen to catch the episode of 'Friends' last night?'\n";
	cin >> choice;

	if (choice == "1") // choice 1
	{
		typeUser("The pressure from space cracked the ships hull, I'm losing oxygen!");
		typeMoore("You will need to find a way to patch the crack! The ship is made from reinforced steel, you'll need to find something just as strong!");
		typeUser("Where should I check for such items?\n");
		typeMoore("I'd probably go to the torch and scrap metal store.\n");
		typeUser("Commander please...\n");
		typeMoore("Come on, have a sense of humor. Check the stoarge room. You will find extra materials in there.\n");
		Sleep(250);
		typeEvent("You run to the storage room and find some scrap metal. It isn't the same metal, but it will have to do.\n");
		Sleep(250);
		typeEvent("Once identifying the crack, you seal it with the materials and return to the terminal to update Moore.\n");
		Sleep(250);
		typeUser("I patched it, but please, next time i'm in a life or death situation, just help.");
		typeMoore("Did the torch and scrap metal store have any good sales?\n");
	}

	else if (choice == "2") // choice 2
	{
		typeUser("What is happening? There is a red warning light!");
		typeMoore("Your ship is losing it's oxygen supply, you need to find the crack and patch it!");
		typeUser("Where can I find such material?");
		typeMoore("Look in the closet down the hall, I believe we have extras in there!");
		typeEvent("You run down the hall frantically in search of something that will help.\n");
		Sleep(250);
		typeEvent("*While checking the closet, you find a torch, but not any material that is useful.\n");
		Sleep(250);
		typeEvent("There are two other places to check. The cargo bay or flight deck?");
		Sleep(100);
		cout << "1 - Check the cargo bay for extra materials." << endl;
		cout << "2 - Check the flight deck for anything that could help." << endl;
		cin >> choice1;
		if (choice1 == "1")
		{
			Sleep(500);
			typeEvent("You run to the cargo bay in hopes of finding something to use.\n");
			Sleep(500);
			typeEvent("You find a piece of scrap metal. It should work!\n");
			Sleep(100);
			typeEvent("You find the crack and seal it without losing too much oxygen.\n");
		}

		else if (choice1 == "2")
		{
			Sleep(1000);
			typeEvent("You check out the flight deck.\n");
			Sleep(500);
			typeEvent("Alas, you find nothing, you check the cargo bay next.\n");
			type(".....\n");
			Sleep(500);
			typeEvent("You run to the cargo bay in hopes of finding something to use.\n");
			Sleep(500);
			typeEvent("You find a piece of scrap metal. It should work!\n");
			Sleep(100);
			typeEvent("You find the crack and seal it without losing too much oxygen.\n");
		}
		else if (choice1 != "1" || choice1 != "2")
		{
			error();
		}
	}

	else if (choice == "3") // choice 3
	{
		typeUser("Did you happen to catch the episode of 'Friends' last night?");
		typeMoore("I did, Ross was great!");
		typeMoore("Is everything okay? I just got an alert from your ship./n");
		Sleep(1000);
		cout << "1 - 'Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.\n";
		cout << "2 - 'I'll be honest Commander, I just woke up from a nap and don't really know where I am.\n";
		cout << "3 - 'Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.\n";
		cin >> choice2;

		if (choice2 == "1")
		{
			typeUser("Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.\n");
			typeMoore("...\n");
			typeMoore("Well okay, if anything does happen, be sure to alert me. I'm sending the feed right now.\n");
			typeUser("I'll let you know Commander. Thank you.");
			typeEvent("You die from lack of oxygen, and before the end of the episode, how sad.");
		}

		else if (choice2 == "2")
		{
			typeUser("I'll be honest Commander, I just woke up from a nap and don't really know where I am.\n");
			typeMoore("I'm getting an alert from your ships IP, is everything okay up there?\n");
			typeUser("Everything seems to be fine, there is a rave going on though.\n");
			typeMoore("No, no, no. There's a breach in the hull. You're losing oxygen, you need to act quickly.\n");
			typeUser("5 more minutes?\n");
			typeMoore("It's your life.\n");
			typeUser("Fine, I'll check the supplies closet.\n");
			typeEvent("You run to the closet and find the materials and patch the crack.\n");
			Sleep(250);
			typeMoore("The alert has settled, good job.\n");
			typeUser("Thanks Commander, see, I got everything undercontrol.\n");
		}

		else if (choice2 == "3")
		{
			typeUser("Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.\n");
			typeMoore("You do understand that you are the only person on the ship, right?\n");
			typeUser("You never know, these aliens are shifty.\n");
			typeMoore("You've found extraterrestrial life? We need to report this! Why didn't you tell me this before?\n");
			typeUser("I've said too much. I must go.\n");
			Sleep(1000);
			typeMoore("...\n");
			Sleep(1000);
			typeMoore("What? Come back here, now!\n");
			Sleep(300);
			typeEvent("You left Commander Moore on a questionable note, will you tell him about the aliens?\n");
			cout << "1 - Yes, I did, we should report it.\n";
			cout << "2 - I don't know what I'm talking about, space makes you say crazy things.\n";
			cin >> choice3;
			if (choice3 == "1")
			{
				typeUser("Yes, I did, we should report it.\n");
				typeMoore("I will report it to HQ right now!\n");
				typeUser("Sounds good! What should I do about the red light?\n");
				typeMoore("What red lig-\n");
				typeMoore("YOU NEED TO HURRY, YOU ARE LOSING OXYGEN, GO TO TJE CLOSET AND GRAB THE TORCH AND SCRAP METAL");
				typeEvent("You run to the closet and grab what you need.");
				typeEvent("You then patch the crack, but you have already lost a substantial amount of oxygen");
				typeEvent("Chances are you will need to use the emergency oxygen reservoir to stay alive.");
			}

			if (choice3 == "2")
			{
				typeUser("I don't know what I'm talking about, space makes you say crazy things.\n");
				typeMoore("...\n");
				Sleep(250);
				typeMoore("Well, alright, but still, you are losing oxygen, you need to act fast.\n");
				typeMoore("Go to the closet and grab a torch and some scrap metal.\n");
				typeEvent("You grab the supplies and weld the crack.");
				typeEvent("But you left Commander feeling uneasy about your alien comment.");
			}

			if (choice3 != "1" || choice3 != "2")
			{
				error();
			}

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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	//system("COLOR 0A");

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
			randFunction();
		}
	}

	system("pause");
    return 0;
}

//Test Commit - 2:29pm 11/13/17
//Test Commit - 3:12pm 11/13/17

