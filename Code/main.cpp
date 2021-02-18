#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char chars[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(chars)-1;
int main()
{
    int lenght;
    cout<<"Enter the length of password:";
    cin>>lenght;
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < lenght; i++)
    cout << chars[rand() % string_length];
    return 0;
}