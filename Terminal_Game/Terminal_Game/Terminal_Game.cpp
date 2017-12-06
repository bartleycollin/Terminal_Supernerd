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
#include <cwchar>

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
		randomNum = (rand() % 86) + 15;
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
	str = ("*" + str + "*");
	for (int i = 0; i < str.length(); i++)
	{
		c++;
		Sleep(10);
		if (newl && str[i] == ' ')
		{
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
	str = ("User 162: " + str);
	Sleep(500);
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 86) + 15;
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
}

//=================================================================================   typeMoore()    //Ian and Collin

void typeMoore(string str)
{
	Sleep(1000);
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
	string choice;
	type("You have died...");
	type("Play again?");
	type("1 - Yes!");
	type("2 - Quit.");
	cin >> choice;

	if (choice == "1") {
		randFunction();
	}

}

//=================================================================================   introduction()    //Collin


//===================================================================================================================================================================================   wire()    //Ian

bool wire()
{
	string choice = "This is some nice placeholder text amirite";
	bool progress = false;
	bool failure = false;
	bool rackSafe = false;
	bool rackOnPanel = true;
	bool fire = true;
	bool terminalOn = false;
	int annoyance = 0;
	string wireLocationStr = "";
	int wireLocation = (rand() % 3) + 1;
	const int row = 5;
	const int column = 9;
	string wireNum;
	string wireLet;
	string wireArray[row][column] =
	{
		{ "1 -> Life Su#####", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "#####ower    <- A" },
		{ "     ------######", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "#######-----     " },
		{ "2 ->    AU######r", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "#########ort <- B" },
		{ "     -----#######", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "########----     " },
		{ "3 -> Art. #######", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "######avity  <- C" }
	};

	wireLocationStr += wireLocation;

	Sleep(500);

	// ============================= Part I
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
			typeEvent("You listen for a few seconds and hear no noise from the air vents, and, after quickly scanning the room, you notice you neither hear nor see the electronics beeps from various panels.");
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
					typeMoore("That confirms it. Head to the generator room and try to find the source of the problem. You'll have to be quick, or else the life support will fail.");
					progress = true;
				}
				else if (choice == "2")
				{
					typeUser("It's too quiet in here. Wayt too quiet");
					typeMoore("That's what I was afraid of. Head to the generator room and see if you can fix the problem. You'll have to be quick, or else the life support will fail.");
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
				cout << "2 - 'What gives you that idea? My sarcastic text?\n";
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
	// ====================================== Part II
	if (!failure)
	{
		typeMoore("Don't forget to turn on the computer in when you get to the generator room so I can help talk you through any problems you come across.");
		Sleep(2000);
		system("CLS");
		typeEvent("You head down to the generator room, and find a concerning scene. On the left side, a metal rack has fallen onto the ships main electrical panel, causing an electrical fire. On the opposite side of the room, you see a terminal similar to the one in the bridge of the ship, with a fire extinguisher next to it.");
		choice = "0";
		progress = false;
		while (progress = false && !failure)
		{
			choice = "0";
			type("Choose an option below:");
			type("1 - Pull the metal rack off of the panel.");
			type("2 - Use the terminal.");
			type("3 - Extinguish the fire.");
			type("4 - Turn off the generator.");
			cin >> choice;
			if (choice == "1" && rackSafe == false)
			{
				typeEvent("You touch a metal rack that is currently channelling elctricity. You get shocked, fall unconcious, and eventually die from the power to the life support eventually failing.");
				failure = true;
			}
			else if (choice == "1" && rackSafe == true)
			{
				if (fire == true)
				{
					typeEvent("You pull the metal rack off of the panel. It's quite hot to the touch, but you manage to avoid the fire.");
				}
				if (fire == false)
				{
					typeEvent("You pull the metal rack off of the panel. It's still warm, but a comfortable warm.");
				}
			}
			else if (choice == "2")
			{
				if (terminalOn == false)
				{
					system("CLS");
					type("ACTIVATING TERMINAL NUMBER [4]. PLEASE STAND BY...");
					Sleep(1000);
					type("BOOT UP PROGRAM SUCCESSFUL. ESTABLISHING CONNECTION TO [CAPTAIN MOORE]...");
					Sleep(750);
					type("CONNECTION ESTABLISHED.");
					terminalOn = true;
				}
				choice = "0";
				while (choice != "1" || choice != "2")
				{
					type("Choose an option to type below:");
					type("1 - 'There's a problem. The electrical panel is on fire.'");
					type("2 - 'There's a problem. A rack fell onto the electrical panel.'");
					if (choice == "1")
					{
						typeUser("There's a problem. The electrical panel is on fire.");
						typeMoore("Well extinguish it already!");
					}
					if (choice == "2")
					{
						typeUser("There's a problem. A rack fell onto the electrical panel.");
						typeMoore("Make sure you shut off the generator before you touch it, otherwise it might shock you!");
					}
				}
			}
			else if (choice == "3" && fire == false)
			{
				typeEvent("Congrats. You wasted time.");
			}
			else if (choice == "3" && fire == true)
			{
				if (rackSafe == true)
				{
					typeEvent("You extinguish the fire.");
				}
				else
				{
					typeEvent("You extinguish the fire. You do notice, however, that there are still sparks flying from the panel.");
				}
				fire = false;
			}
			else if (choice == "4" && rackSafe == true)
			{
				typeEvent("You turn the generator on and off again. You feel slightly better or something.");
			}
			else if (choice == "4" && rackSafe == false)
			{
				if (fire == true)
				{
					typeEvent("You turn off the generator.");
				}
				if (fire == false)
				{
					typeEvent("You turn off the generator. You notice the sparks stop flying out from the panel.");
				}
			}
			else
			{
				error();
			}
			if (rackOnPanel == false && fire == false)
			{
				progress = true;
			}
		}
	}
	// ============================================== Part III
	if (!failure)
	{
		progress = false;
		typeEvent("You head over to the terminal to find out how you should proceed, since you have almost no knowledge about wiring electrical panels.");
		if (terminalOn == false)
		{
			system("CLS");
			type("ACTIVATING TERMINAL  NUMBER [4]. PLEASE STAND BY...");
			Sleep(1000);
			type("BOOT UP PROGRAM SUCCESSFUL. ESTABLISHING CONNECTION TO [CAPTAIN MOORE]...");
			Sleep(750);
			type("CONNECTION ESTABLISHED.");
			terminalOn = true;
		}
		choice = "0";
		while (choice != "1" || choice != "2")
		{
			type("Choose an option to type below:");
			type("1 - 'Alright, I've put out the fire, turned off the generator, and pulled the rack off of the panel. How should I proceed?'");
			type("2 - 'I now have access to the electrical panel, which has several wires burnt up. How should I proceed?'");
			if (choice == "1")
			{
				typeUser("Alright, I've put out the fire, turned off the generator, and pulled the rack off of the panel. How should I proceed?");
			}
			else if (choice == "2")
			{
				typeUser("I now have access to the electrical panel, which has several wires burnt up. How should I proceed?");
			}
			else
			{
				error();
			}
		}
		typeMoore("Good. I need you to now search the room for spare wiring so you can fix the panel.");
		choice = "0";
		while (wireLocation != 0)
		{
			cout << "Search a location:\n";
			cout << "1 - Tool cabinets in the far right corner";
			cout << "2 - The desk with the terminal on it.";
			cout << "3 - Wooden supply crates in the far left corner";
			cin >> choice;
			if (choice == wireLocationStr)
			{
				typeEvent("You found the wires!");
				wireLocation = 0;
			}
			else if (choice == "1")
			{
				typeEvent("You did not find the wire in the tool cabinets.");
			}
			else if (choice == "2")
			{
				typeEvent("You did not find the wire in the desk.");
			}
			else if (choice == "3")
			{
				typeEvent("You did not find the wire in the wooden crates.");
			}
			else
			{
				error();
			}
		}
		typeUser("I found the wires. What now?");
		typeMoore("You'll have to connect each of the ship's systems to their corresponding power supplies. They should be clearly labelled, but I don't really remember where they were located, so you're on your own.");

		// ============================================ Part III + I/2

		typeEvent("You take a look at the panel. After clearing away burnt remnants of unusable wires, which have snapped and bent from the intense heat, you notice that parts of the labels have been burnt off. However, you figure that enough of them are left for you to figure out where the wires go.");

		while (!progress)
		{
			cout << "This is what you see before you.";
			Sleep(250);
			for (int i = 0; i < row; i++)
			{
				for (int c = 0; c < column; c++)
				{
					cout << wireArray[i][c];
				}
				cout << endl;
			}
			Sleep(250);
			wireNum = "0";
			wireLet = "LUL";
			while (wireNum != "1" || wireNum != "2" || wireNum != "3")
			{
				cout << "What would you like to connect.?";
				cout << "1 - '1'";
				cout << "2 - '2'";
				cout << "3 - '3'";
				cin >> wireNum;
				if (wireNum != "1" || wireNum != "2" || wireNum != "3")
				{
					error();
				}
			}
		}
	}
	return failure;
}
void patch() // zach, function for mini game inside of spacevac scenario
{
	bool good;
	int number;
	string ans;
	string guess;
	type("YOU HAVE BEGUN TO PATCH THE CRACK");
	type("You will need to type each number as they correspond on screen.");
	type("There will be 5 numbers, remember them and then type them.");
	Sleep(300);
	type("3");
	type("2");
	type("1");
	type("=======");
	srand(time(NULL));
	for (int i = 3; i > 0; i--)
	{
		for (int a = 0; a < 5; a++)
		{
			number = rand() % 9 + 1;
			cout << number << " ";
			ans += number;
		}
		cout << endl;
		cin >> guess;
		// clear entire screen then redisplay the other text
		{
			if (guess == ans)
			{
				cout << "Good job! " << endl;
			}
			if (guess != ans)
			{
				cout << "You didn't correctly patch it." << endl;
				break;
				death();
			}
			if (i == 5)
			{
				cout << "You failed to patch it in time." << endl;
				good = false;
				death();
			}
		}
		}
	}


void playPatch() // easier to call patch function and make sure user is ready.
{
	string answer;
	type("Are you ready to patch the hull? (y\n)");
	cin >> answer;
	if (answer == "y")
	{
		patch();
	}
	if (answer == "n")
	{
		type("I think you are ready, let's play.");
		patch();
	}
}

// space vacuum event //Zach
bool spacevac()
{
	string choice;
	string choice1;
	string choice2;
	string choice3;
	Sleep(50);

	cout << endl;
	typeEvent("A red warning light alarms you that a crack has formed from the pressure outside, slowly depleting your oxygen supply.");
	Sleep(1000);
	typeEvent("What will you send Commander?");
	type("1 - 'The pressure from space cracked the ships hull, I'm losing oxygen!'");
	type("2 - 'What is happening? There is a red warning light!'");
	type("3 - 'Did you happen to catch the episode of 'Friends' last night?'\n");
	cin >> choice;

	if (choice == "1") // choice 1
	{
		typeUser("The pressure from space cracked the ships hull, I'm losing oxygen!");
		typeMoore("You will need to find a way to patch the crack! The ship is made from reinforced steel, you'll need to find something just as strong!");
		typeUser("Where should I check for such items?");
		typeMoore("I'd probably go to the torch and scrap metal store.");
		typeUser("Commander please...");
		typeMoore("Come on, have a sense of humor. Check the stoarge room. You will find extra materials in there.");
		Sleep(250);
		typeEvent("You run to the storage room and find some scrap metal. It isn't the same metal, but it will have to do.");
		Sleep(250);
		typeEvent("Once identifying the crack, you begin to seal it.");
		playPatch();
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
		typeEvent("You run down the hall frantically in search of something that will help.");
		Sleep(250);
		typeEvent("While checking the closet, you find a torch, but not any material that is useful.");
		Sleep(250);
		typeEvent("There are two other places to check. The cargo bay or flight deck?");
		Sleep(100);
		type("1 - Check the cargo bay for extra materials.");
		type("2 - Check the flight deck for anything that could help.\n");
		cin >> choice1;
		if (choice1 == "1")
		{
			Sleep(500);
			typeEvent("You run to the cargo bay in hopes of finding something to use.\n");
			Sleep(500);
			typeEvent("You find a piece of scrap metal. It should work!\n");
			Sleep(100);
			typeEvent("You find the crack.");
			playPatch();
			typeEvent("You patched it without losing too much oxygen.");
		}

		else if (choice1 == "2")
		{
			Sleep(1000);
			typeEvent("You check out the flight deck.");
			Sleep(500);
			typeEvent("Alas, you find nothing, you check the cargo bay next.");
			type(".....");
			Sleep(500);
			typeEvent("You run to the cargo bay in hopes of finding something to use.");
			Sleep(500);
			typeEvent("You find a piece of scrap metal. It should work!");
			Sleep(100);
			typeEvent("You find the crack.");
			playPatch();
			typeEvent("You patched it without losing too much oxygen.");
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
		typeMoore("Is everything okay? I just got an alert from your ship.");
		Sleep(1000);
		type("1 - 'Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.");
		type("2 - 'I'll be honest Commander, I just woke up from a nap and don't really know where I am.");
		type("3 - 'Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.\n");
		cin >> choice2;

		if (choice2 == "1")
		{
			typeUser("Everything is good, can you send me a feed of last nights episode on the big screen? I can't wait to watch it.");
			typeMoore("...");
			typeMoore("Well okay, if anything does happen, be sure to alert me. I'm sending the feed right now.");
			typeUser("I'll let you know Commander. Thank you.");
			typeEvent("You die from lack of oxygen, and before the end of the episode, how sad.\n");
			death();
		}

		else if (choice2 == "2")
		{
			typeUser("I'll be honest Commander, I just woke up from a nap and don't really know where I am.");
			typeMoore("I'm getting an alert from your ships IP, is everything okay up there?");
			typeUser("Everything seems to be fine, there is a rave going on though.");
			typeMoore("No, no, no. There's a breach in the hull. You're losing oxygen, you need to act quickly.");
			typeUser("5 more minutes?");
			typeMoore("It's your life.");
			typeUser("Fine, I'll check the supplies closet.\n");
			typeEvent("You run to the closet to find the materials.");
			Sleep(250);
			typeEvent("Once at the supply closet you look through until finding what is needed.");
			typeEvent("You run to the crack and begin to patch it.");
			playPatch();
			typeMoore("The alert has settled, good job.");
			typeUser("Thanks Commander, see, I got everything undercontrol.\n");
		}

		else if (choice2 == "3")
		{
			typeUser("Now that you say something, there is a bright light that woke me, I thought some jokester pulled the fire alarm.");
			typeMoore("You do understand that you are the only person on the ship, right?");
			typeUser("You never know, these aliens are shifty.");
			typeMoore("You've found extraterrestrial life? We need to report this! Why didn't you tell me this before?");
			typeUser("I've said too much. I must go.");
			Sleep(1000);
			typeMoore("...");
			Sleep(1000);
			typeMoore("What? Come back here, now!");
			Sleep(300);
			typeEvent("You left Commander Moore on a questionable note, will you tell him about the aliens?");
			type("1 - Yes, I did, we should report it.");
			type("2 - I don't know what I'm talking about, space makes you say crazy things.\n");
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
				playPatch();
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
				playPatch();
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

void introduction() {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 26;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int j = 0;j<75;j++) {
		SetConsoleTextAttribute(hConsole, 14);
		system("CLS");
		pushX(j);
		cout << "[=====>" << endl;
		pushX(j);
		cout << "[  (    _____" << endl;
		pushX(j);
		cout << " \\__\\,-'//   `--._" << endl;
		pushX(j);
		cout << "  [_/~||,-----.\\@_\\\\___" << endl;
		pushX(j);
		cout << "  [_) |||()()()   ~[|||>" << endl;
		pushX(j);
		cout << "  [_\\_||`-----'   //" << endl;
		pushX(j);
		cout << " /  /`-.\\\\___,--'==(-" << endl;
		pushX(j);
		cout << "[  (" << endl;
		pushX(j);
		cout << "[=====>" << endl;
		/*
[=====>
[  (    _____
 \__\,-'//   `--._
  [_/~||,-----.\@_\\___
  [_) |||()()()   ~[|||>
  [_\_||`-----'   //
 /  /`-.\\___,--'==(-
[  (
[=====>
MADE BY Kenneth D Miller*/
		Sleep(2);
	}

	

	cout << "Terminal: ";
	//Sleep(1000);
	//cfi.dwFontSize.Y = 24;
	type("You are User 162. You are currently aboard the C++ Enterprise cargo ship.");
	//Sleep(1000);
	type("You are the only worker on this ship. Your boss is Captain Moore. He communicates with you daily through various terminals on the ship.");
	//Sleep(1000);
	type("While your job is enjoyable enough, you are beginning to notice things can be a little unsettling at times.");
//	Sleep(1000);
	type("As things go wrong, it's up to you to make sure you survive.");
	//Sleep(1000);
	type("Captain Moore is your benevolent leader, who is a god among men. He is a space mobster who also enjoys teaching on the side.");
	typeMoore("It's true... I do.");
	type("Are you up for the challenge?");

	string choice;

	while (choice != "1" && choice != "2") {
		cout << "1 - 'Let's go!'\n";
		cout << "2 - 'Quit Game.'\n";
		cin >> choice;
		cfi.dwFontSize.Y = 12;
		
		if (choice == "1")
		{
			randFunction();
		}
	}
}

//========================================================================================================================================================================   main()

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//system("COLOR 0A");

	system("mode 650"); // found on stack overflow, makes console windowed fullscreen, Zach
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	//type("type Test");
	//typeEvent("typeEvent test");
	//typeMoore("typeMoore test");
	//typeUser("typeUser test");
//	error();
//	Sleep(2000);
	SetConsoleTextAttribute(hConsole, 10);

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
		cout << "2 - 'Introduction.'\n";
		cout << "3 - 'Quit Game.'\n";
		cin >> choice;

		if (choice == "1")
		{
			patch();
		}
		if (choice == "2")
		{
			introduction();
		}
	}

	system("pause");
    return 0;
}

//Test Commit - 2:29pm 11/13/17
//Test Commit - 3:12pm 11/13/17

