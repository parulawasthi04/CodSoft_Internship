#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    fflush(stdin);
    system("color 0A");
    system("cls");
    printf("\e[?251");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;
    cout << "\n\n\n\t\t\tLoading...  ";
    cout << "\n\n\n\t\t\t\t";

    for (int i = 0; i < 25; i++)
    {
        cout << (char)bar1;
    }

    cout << "\r";
    cout << "\t\t\t\t";

    for (int i = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }
    cout << "\n\t\t\t\t" << (char)1 << "!";
    system("Pause");
    

    string name;
    char input;
    int userinput;
    cout << "\nEnter your name: ";
    getline(cin, name);
    cout << endl;

    int chance = 0;
    srand((unsigned)time(NULL));
    int variable = (rand() % 100) + 1;
    cout<<variable<<endl;

    do
    {

        cout << "\nEnter any number in between range 1 to 100 ";
        cin >> userinput;
        chance++;
        cout << endl;
        if(userinput != variable)
        {
        cout << "Would you like to continue Y/N ";
        cin >> input;
        cout << endl;
        }

        if (userinput > variable)
        {
            cout << "Enter smaller number\n";
        }
        else

        {
            cout << "Enter greater number\n";
        }
        

    } while (userinput != variable);
    if (userinput == variable)
    {
        cout << "CONGRATULATIONS!!! YOU GUESSED IT RIGHT\n";
        cout << "HELLO " << name << " You guessed in " << chance << " attempts";
    }
    else
    {
        cout << "SORRY!!! YOU GUESSED IT WRONG. \n";
        cout<<"Number is "<<variable;
    }

    cout << "\nGAME END" << endl;

    return 0;
}