// Simulates typing or something
// Made by: Ian Ryan

#include "stdafx.h"
#include "iostream"
#include "string"
#include "time.h"
#include "windows.h"

using namespace std;

void typing(string);

void typing(string str)
{
	int randomNum;
	for (int i = 0; i < str.length(); i++)
	{
		randomNum = (rand() % 51) + 15;
		cout << str[i];
		Sleep(randomNum);
	}
	cout << endl;
