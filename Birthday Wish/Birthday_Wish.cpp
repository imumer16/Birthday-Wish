#include<iostream>
#include<string>
#include <fstream>
#include<Windows.h>
#pragma comment(lib, "winmm.lib")

using namespace std;

void ChangeColor() {
	system("COLOR 8"); Sleep(200);
	system("COLOR D"); Sleep(200);
	system("COLOR 5"); Sleep(200);
	system("COLOR B"); Sleep(200);
}

int main() {
	sndPlaySound(TEXT("HappyBirthday.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);

	/* Enter your name in the below line*/
	cout << "\n\n\n\t\t From ( Enter Your Name here) ";
	cout << "\n\t\t-------------------------------\n\n";

	string getcontent;
	ifstream openfile("Happy_Bithday.txt");
	if (openfile.is_open()){
		while (!openfile.eof()){
			getline(openfile, getcontent);
			cout << "\t" << getcontent << endl;
			Sleep(100);
		}
	}

	while (1){
		ChangeColor();
	}
	return 0;
}