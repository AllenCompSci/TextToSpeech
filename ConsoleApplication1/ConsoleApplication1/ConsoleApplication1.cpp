// ConsoleApplication1.cpp : Defines the entry point for the console application.
// This Library is from GitHub 

#include "stdafx.h"
#include "speak.h"
#include "language.h"
#include "targetver.h"
#include "TextToSpeech.h"
using namespace std;
const int pause_beforeRead = 110;
const int pause_afterRead = 150;

int wmain()
{
	for (int i = 10009; i >= 0; i--)
		wcout << "\b\b\b\b\b\b\b\b\b\b\b" <<(i/10000000)%10 << (i / 1000000) % 10 <<  (i / 100000) % 10 <<":" << (i / 10000) % 10 << (i / 1000) % 10 << ":"  << (i / 100) % 10 << (i / 10) % 10 << i % 10;
	TTS("BR");
	string collect;
	TTS("Text to Speech Program version one point nine.");
	wcout << "Welcome to the Text to Speech Program, version one point nine. : \n";
	while (true) {
		Sleep(pause_beforeRead);
		wcout << "Enter the string you wish to have read : ";
		getline(cin, collect);
		Sleep(pause_beforeRead);
		TTS(collect);
		system("cls");
		Sleep(pause_afterRead);
	}
	return 0;
}

