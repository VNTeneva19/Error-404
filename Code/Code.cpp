#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>

using namespace std;

void ClearScreen() {
	cout << "\x1B[2J\x1B[H";
}


void Menu() {
	cout << "                                                   CHOOSE AN OPTION!" << endl;
	cout << endl;
	cout << "                                       Type 0 If you want to quit the program" << endl;
	cout << endl;
	cout << "                              Type 1 if you want to check if your password is secure enough" << endl;
	cout << endl;
	cout << "                              Type 2 if you want us to generate a secure password for you" << endl;
	cout << endl;
	cout << "                              Type 3 if you want to read about how secure our passwords are" << endl;

	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;


	cout << "Type here...";
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

	Error404();

	do {

		Menu();

		cin >> choice;

		ClearScreen();

		switch (choice)
		{

		case 0: cout << "Goodbye!";
			return 0;

		case 1: cout << "Let's check your password" << endl;
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