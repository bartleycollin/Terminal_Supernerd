// Terminal_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "time.h"
#include "windows.h"

using namespace std;

void pushX(int num) {
	for (int i = 0;i<num;i++)
		cout << " ";
}

void type(string str) {
	int randomNum;
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		cout << str[i];
		Sleep(randomNum);
	}
	cout << endl;
}

int main()
{
	type("Whoa!");

	for (int j = 0;j<50;j++) {
		system("CLS");
		pushX(j);
		cout << "Hello";
		Sleep(20);
	}

	system("pause");
    return 0;
}

//Test Commit - 2:29pm 11/13/17
//Test Commit - 3:12pm 11/13/17

