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

string app;
string app1;
int choice;

void ClearScreen() {
	cout << "\x1B[2J\x1B[H";
}


void Menu() {
	cout << "                                                    CHOOSE AN OPTION!" << endl;
	cout << endl;
	cout << "                                          Type 0 If you want to quit the program" << endl;
	cout << endl;
	cout << "                                 Type 1 if you want to check how secure your password is" << endl;
	cout << endl;
	cout << "                                    Type 2 if you want to generate a secure password" << endl;
	cout << endl;
	cout << "                            Type 3 if you want to get some tips how to make your password better" << endl;
	cout << endl;
	cout << "                                         Type 4 if you want to save your password" << endl;

	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;


	cout << "Type here...";
}

void Error404() {
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

void UsefulInformation() {
	cout << "                                                CREATE A STRONG PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "Make sure you follow the following tips" << endl << endl;
	cout << " - A strong password can be memorable to you but nearly impossible for someone else to guess." << endl;
	cout << " - Avoid personal info & common words" << endl;
	cout << " - Create your password using 6 characters or more" << endl;
	cout << " - Add capital letters to your password" << endl;
	cout << " - Add numbers to your password" << endl;
	cout << " - Add signs to your password" << endl << endl;
}

void CheckPasswordMenu() {
	cout << endl << "                                       LET'S CHECK HOW SECURE YOUR PASSWORD IS" << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "                                                Enter your password: ";
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
		cout << "Very strong" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 3) {
		cout << "Strong" << endl << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 2) {
		cout << "Moderate" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 1) {
		cout << "Weak" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
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
		cout << "- Add signs to your password!" << endl;
	}

	NumbersCounter = 0;
	CapitalLettersCounter = 0;
	SignsCounter = 0;
	PasswordStrength = 0;
	LettersCounter = 0;

}
	
void SavePassword(string app) {
	cout << endl << "                                                LET'S SAVE YOUR PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "                                                 Enter the app's name: ";
	cin >> app;
}

void SavePassword1(string pass) {
	cout << endl << "                                                LET'S SAVE YOUR PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";

	cout << endl;
	cout << "                                                  Enter your password: ";
	cin >> pass;
}

void SavePassword2(string app1, string pass) {
	cout << endl << "                                                LET'S SAVE YOUR PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";

	cout << endl;
	cout << "                                      Enter the app which password you want to see: ";
	cin >> app1;
	if (app == app1) {

	}
	cout << endl << "This is your " << app1 << "'s password: " << pass << endl << endl << endl << endl;
}

void SavePassword3(string pass, string app) {
	cout << endl << "                                                LET'S SAVE YOUR PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;

	cout << "                                        Type 1 if you want to save a password" << endl;
	cout << "                                     Type 2 if you want to check a saved password" << endl;
	cout << "Enter your choice here: ";
	cin >> choice;
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

		case 3: cout << endl;
			ClearScreen();
			UsefulInformation();
			break;

		case 4: SavePassword3(pass, app);

			break;

		default: cout << endl << "Tht's not an option, try again ";
			break;

		}

		cout << "If you still want to use the app:" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
		cout << endl;

	} while (choice != 0);
}