#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

int NumbersCounter = 0;
int CapitalLettersCounter = 0;
int SignsCounter = 0;
int PasswordStrength = 0;
int LettersCounter = 0;

void ClearScreen() {
	cout << "\x1B[2J\x1B[H";
}


void Menu() {
	cout << "                                                   CHOOSE AN OPTION!" << endl;
	cout << endl;
	cout << "                                        Type 0 If you want to quit the program" << endl;
	cout << endl;
	cout << "                              Type 1 if you want to check if your password is secure enough" << endl;
	cout << endl;
	cout << "                              Type 2 if you want us to generate a secure password for you" << endl;
	cout << endl;
	cout << "                              Type 3 if you want to read about how secure our passwords are" << endl;
	cout << endl;
	cout << "                                        Type 4 if you want to save your password" << endl;

	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;


	cout << "Type here...";
}

void CheckPasswordMenu() {
	cout << endl << "                                       LET'S CHECK HOW SECURE YOUR PASSWORD IS" << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "Enter your password...";
}
void CheckPassword(string pass) {

	for (int i = 0; i < pass.size(); i++) {
		if ((pass[i] >= '!' && pass[i] <= '/') || (pass[i] >= ':' && pass[i] <= '?') || (pass[i] >= '[' && pass[i] <= '`') || (pass[i] >= '{' && pass[i] <= '~')) {
			SignsCounter++;
		}
	}
	if (SignsCounter != 0) {
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++) {
		if (pass[i] >= 'a' && pass[i] <= 'z') {
			LettersCounter++;
		}
	}
	if (LettersCounter != 0) {
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++) {
		if (pass[i] >= '0' && pass[i] <= '9') {
			NumbersCounter++;
		}
	}
	if (NumbersCounter != 0) {
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++) {
		if (pass[i] >= 'A' && pass[i] <= 'Z') {
			CapitalLettersCounter++;
		}
	}
	if (CapitalLettersCounter != 0) {
		PasswordStrength++;
	}

	cout << endl << "Strength of password: ";



	if (PasswordStrength == 4) {
		cout << "Very strong" << endl << endl;
	}

	if (PasswordStrength == 3) {
		cout << "Strong" << endl << endl;
	}

	if (PasswordStrength == 2) {
		cout << "Moderate" << endl << endl;
	}

	if (PasswordStrength == 1) {
		cout << "Weak" << endl << endl;
	}


	if (PasswordStrength < 4) {
		cout << "How to make your password better:" << endl << endl;
	}


	if (pass.size() < 6) {
		cout << "- Make your password longer!" << endl;
	}

	if (NumbersCounter == 0) {
		cout << "- Add numbers to your passowrd!" << endl;
	}

	if (LettersCounter == 0) {
		cout << "- Add letters to your password!" << endl;
	}

	if (CapitalLettersCounter == 0) {
		cout << "- Add capital letters to your password!" << endl;
	}

	if (SignsCounter == 0) {
		cout << "- Add signs to your password" << endl;
	}

	NumbersCounter = 0;
	CapitalLettersCounter = 0;
	SignsCounter = 0;
	PasswordStrength = 0;
	LettersCounter = 0;

}

void Error404()
{
	cout << endl;
	cout << "                                                HI, WELCOME TO ERROR 404!" << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";

	cout << endl;
	cout << endl;

	cout << "                    0100110" << "   " << "1010010" << "   " << "1010010" << "   " << "0011010" << "   " << "1010010" << "       " << "01   10" << "   " << "0011010" << "  " << "01   10" << endl;

	cout << "                    00     " << "   " << "00    10" << "  " << "00    10" << "  " << "10   00" << "   " << "00    10" << "      " << "10   11" << "   " << "10   00" << "  " << "10   11" << endl;

	cout << "                    1001110" << "   " << "01101111" << "  " << "01101111" << "  " << "01   10" << "   " << "01101111" << "      " << "0110101" << "   " << "01   10" << "  " << "0110101" << endl;

	cout << "                    10     " << "   " << "11 00 " << "    " << "11 00 " << "    " << "11   10" << "   " << "11 00 " << "        " << "     11" << "   " << "11   10" << "  " << "     11" << endl;

	cout << "                    0010110" << "   " << "11  10  " << "  " << "11  10  " << "  " << "0011010" << "   " << "11  10  " << "      " << "     01" << "   " << "0011010" << "  " << "     01" << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;

}

char chars[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(chars) - 1;

int main()
{

	int choice;
	int length;
	string pass;

	Error404();

	do {

		Menu();

		cin >> choice;

		ClearScreen();

		switch (choice)
		{

		case 0: cout << "Goodbye!";
			return 0;

		case 1: CheckPasswordMenu();
			cin >> pass;
			ClearScreen();
			CheckPassword(pass);
			cout << endl;
			break;

		case 2: cout << endl << "                                          LET'S GENERATE A PASSOWRD FOR YOU" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------";
			cout << endl;
			cout << "                                            Enter the length of password: ";
			cin >> length;
			srand(time(0));
			cout << endl << "Your password is: ";
			for (int i = 0; i < length; i++)
				cout << chars[rand() % string_length];
			cout << endl << endl << endl << endl;
			break;

		case 3: cout << "Here are the things that you might find interesting about how secure passwords can actually be" << endl;
			cout << endl;
			break;

		case 4: cout << "Let's save your password" << endl;
			cout << endl;
			break;

		default: cout << endl << "Tht's not an option, try again ";
			break;

		}

		cout << "If you still want to use the app:" << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
		cout << endl;

	} while (choice != 0);
}