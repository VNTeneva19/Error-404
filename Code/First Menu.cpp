#include <iostream>
using namespace std;

void Menu(int c)
{

}

int main()
{
	int choice;

	cout << endl;
	cout << "                             HI, WELCOME TO ERROR 404!" << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------";
	cout << endl;
	cout << endl;
	cout << " 0100110" << "   " << "1010010" << "   " << "1010010" << "   " << "0011010" << "   " << "1010010" << "       " << "01   10" << "   " << "0011010" << "  " << "01   10" << endl;

	cout << " 00     " << "   " << "00    10" << "  " << "00    10" << "  " << "10   00" << "   " << "00    10" << "      " << "10   11" << "   " << "10   00" << "  " << "10   11" << endl;

	cout << " 1001110" << "   " << "01101111" << "  " << "01101111" << "  " << "01   10" << "   " << "01101111" << "      " << "0110101" << "   " << "01   10" << "  " << "0110101" << endl;

	cout << " 10     " << "   " << "11 00 " << "    " << "11 00 " << "    " << "11   10" << "   " << "11 00 " << "        " << "     11" << "   " << "11   10" << "  " << "     11" << endl;

	cout << " 0010110" << "   " << "11  10  " << "  " << "11  10  " << "  " << "0011010" << "   " << "11  10  " << "      " << "     01" << "   " << "0011010" << "  " << "     01" << endl;

	cout << endl; 

	cout << endl;

	do {
		cout << "                                 CHOOSE AN OPTION!" << endl;
		cout << endl;
		cout << " --> Type 0 If you want to quit the program" << endl;
		cout << endl;
		cout << " --> Type 1 If you want to check if your password is secure enough" << endl;
		cout << endl;
		cout << " --> Type 2 If you want us to generate a secure password for you" << endl;
		cout << endl;
		cout << " --> Type 3 If you want to read about how secure our passwords are" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: cout << "Goodbye!";
			return 0;
		case 1: cout << "Let's check your password" << endl;
			cout << endl;
			cout << "If you still want to play:";
			cout << endl;
			break;
		case 2: cout << "Let's generate a password for you" << endl;
			cout << endl;
			cout << "If you still want to play:";
			cout << endl;
			break;
		case 3: cout << "Here are the things that you might find interesting about how secure passwords can actually be" << endl;
			cout << endl;
			cout << "If you still want to play:";
			cout << endl;
			break;
		}
	} while (choice != 0);
}