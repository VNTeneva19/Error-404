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

char chars[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(chars) - 1;

string App;
string App1;
string pass;
string password;
int choice;
int Counter;

// Clear the console
void ClearScreen()
{
	cout << "\x1B[2J\x1B[H";
}

// Display the menu of the program
void Menu()
{
	cout << "                                                    CHOOSE AN OPTION!" << endl;
	cout << endl;
	cout << "                                          Type 0 if you want to quit the program" << endl;
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


	cout << "Type here: ";
}
// Display the name of the team
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
// Display tips for a stronger password
void UsefulInformation()
{
	cout << "                                                 CREATE A STRONG PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "                                          Make sure you follow the following tips" << endl << endl;

	cout << "                                     - Avoid personal info & common words" << endl;
	cout << "                                     - Create your password using 6 characters or more" << endl;
	cout << "                                     - Add capital and lower-case letters to your password" << endl;
	cout << "                                     - Add numbers to your password" << endl;
	cout << "                                     - Add signs to your password" << endl << endl;
}
// Check how secure is your password 
void CheckPasswordMenu()
{
	cout << endl << "                                       LET'S CHECK HOW SECURE YOUR PASSWORD IS" << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;
	cout << "                                                Enter your password: ";
}
// Display tips based off your password strength
void CheckPassword(string pass)
{

	for (int i = 0; i < pass.size(); i++)
	{
		if ((pass[i] >= '!' && pass[i] <= '/') || (pass[i] >= ':' && pass[i] <= '?') || (pass[i] >= '[' && pass[i] <= '`') || (pass[i] >= '{' && pass[i] <= '~'))
		{
			SignsCounter++;
		}
	}

	if (SignsCounter != 0)
	{
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++)
	{
		if (pass[i] >= 'a' && pass[i] <= 'z')
		{
			LettersCounter++;
		}
	}

	if (LettersCounter != 0)
	{
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++)
	{
		if (pass[i] >= '0' && pass[i] <= '9')
		{
			NumbersCounter++;
		}
	}

	if (NumbersCounter != 0)
	{
		PasswordStrength++;
	}

	for (int i = 0; i < pass.size(); i++)
	{
		if (pass[i] >= 'A' && pass[i] <= 'Z')
		{
			CapitalLettersCounter++;
		}
	}

	if (CapitalLettersCounter != 0)
	{
		PasswordStrength++;
	}

	cout << endl << "                                                STRENGTH OF PASSWORD: ";



	if (PasswordStrength == 4)
	{
		cout << "Very strong" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 3)
	{
		cout << "Strong" << endl << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 2)
	{
		cout << "Moderate" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}

	if (PasswordStrength == 1)
	{
		cout << "Weak" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
	}


	if (PasswordStrength < 4)
	{
		cout << "                                              How to make your password better:" << endl << endl;
	}


	if (pass.size() < 6)
	{
		cout << "                                               - Make your password longer!" << endl;
	}

	if (NumbersCounter == 0)
	{
		cout << "                                               - Add numbers to your passowrd!" << endl;
	}

	if (LettersCounter == 0)
	{
		cout << "                                               - Add lower-case letter to your password!" << endl;
	}

	if (CapitalLettersCounter == 0)
	{
		cout << "                                               - Add capital letters to your password!" << endl;
	}

	if (SignsCounter == 0)
	{
		cout << "                                               - Add signs to your password!" << endl;
	}

	NumbersCounter = 0;
	CapitalLettersCounter = 0;
	SignsCounter = 0;
	PasswordStrength = 0;
	LettersCounter = 0;

}
// Save your password or check a saved password for certain application
void SavePasswordMenu()
{

	cout << endl << "                                               LET'S SAVE YOUR PASSWORD" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl;

	cout << "                                        Type 1 if you want to save a password" << endl << endl;
	cout << "                                     Type 2 if you want to check a saved password" << endl << endl;
	cout << "                                              Enter your choice here: ";
	cin >> choice;
	ClearScreen();
	if (choice == 1)
	{

		cout << endl << "                                              LET'S SAVE YOUR PASSWORD" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
		cout << "                                               Enter the app's name: ";
		cin >> App;

		ClearScreen();

		cout << endl << "                                               LET'S SAVE YOUR PASSWORD" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
		cout << "                                                 Enter your password: ";
		cin >> password;

		ClearScreen();

		cout << endl << "                                                   Your password is saved" << endl << endl;

	}

	if (choice == 2)
	{
		cout << endl << "                                             LET'S CHECK YOUR SAVED PASSWORD" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";

		cout << endl;
		cout << "                                      Enter the app which password you want to see: ";
		cin >> App1;
		if (App == App1)
		{
			cout << endl << "                                            This is your " << App1 << "'s password: " << password << endl << endl << endl << endl;
		}

		else
		{
			cout << endl << "                                          You haven't entered a password for this app" << endl << endl;
		}


	}

	else if (choice != 1 && choice != 2)
	{
		cout << endl << "                                               Tht's not an option, try again" << endl << endl;
	}

	else if (choice <= 'a' && choice >= 'z')
	{
		cout << endl << "                                               Tht's not an option, try again" << endl << endl;
	}
}

// Display main menu options
int mainMenu() 
{
	int length;

	do {

		Menu();


		cin >> choice;

		ClearScreen();

		switch (choice)
		{

		case 0: cout << "Goodbye!";
			return false;

		case 1: CheckPasswordMenu();
			cin >> pass;
			ClearScreen();
			CheckPassword(pass);
			cout << endl;
			return true;
			break;

		case 2: cout << endl << "                                             LET'S GENERATE A PASSOWRD FOR YOU" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------";
			cout << endl;
			cout << "                                             Enter the length of password: ";
			cin >> length;

			ClearScreen();

			srand(time(0));
			cout << endl << "                                                Your password is: ";
			for (int i = 0; i < length; i++)
			{
				cout << chars[rand() % string_length];
			}
			cout << endl << endl << endl << endl;
			return true;
			break;

		case 3: cout << endl;
			ClearScreen();
			UsefulInformation();
			return true;
			break;

		case 4: SavePasswordMenu();
			return true;
			break;

		default: cout << endl << "                                               Tht's not an option, try again" << endl << endl;
			return true;
			break;

		}

		

	} while (choice != 0);
}

// Display main menu
int main()
{
	bool exitProgram = true;
	Error404();
	do
	{
		exitProgram = mainMenu();
		if (exitProgram != false)
		{ 
		cout << "                                              If you still want to use the app:" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << endl;
		cout << endl;
		}
	} while (exitProgram != false);
}