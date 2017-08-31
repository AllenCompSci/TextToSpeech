#include "stdafx.h"
#include "TextToSpeech.h"

using namespace std;


void TTS(string SentMessage) {
	int argc = 3;
	wchar_t* LANG = L"SAM";

	wchar_t* Message = L"This is Microsoft Alice, Welcome to Computer Science One. Good Morning!";

	string storeMessage = SentMessage;
	wchar_t* conversion = new wchar_t[storeMessage.length() + 1];
	copy(storeMessage.begin(), storeMessage.end(), conversion);
	conversion[storeMessage.length()] = 0;

	if (FAILED(::CoInitialize(NULL)))
		return;

	if (argc == 3) {
		try {
			wchar_t * voice = getLanguage(LANG);
			bool spoken = speak(conversion, voice);
		}
		catch (wchar_t* ex) {
			wcout << "ERROR " << ex << endl;
		}
	}
	else {
		wcout << "ERROR " << " You made a mistake in arguments." << endl;
	}

	::CoUninitialize();
	//system("pause");
}