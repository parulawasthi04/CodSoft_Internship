#include <iostream>
#include<ctime>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    fflush(stdin);
    system("color 0b");
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
    char operation;
    int number1, number2;
    int result;
    char choice;

    do
    {
        cout << "Enter two numbers: ";
        cin >> number1 >> number2;
        cout << "Enter the operator ";
        cin >> operation;
        switch (operation)
        {
        case '+':
            result = number1 + number2;
            cout << "Addition is " << result;
            break;
        case '-':
            result = number1 - number2;
            cout << "Subtraction is " << result;
            break;
        case '/':
            result = number1 / number2;
            cout << "Division is " << result;
            break;
        case '*':
            result = number1 * number2;
            cout << "Multiplicatio is " << result;

            break;
        case '%':
            result = number1 % number2;
            cout << "Reminder when number1 is divided by number 2 is" << result;
            break;
        default:

            cout << "WRONG CHOICE!!";
            break;
        }
        cout << "\nDo you want to continue(Y/N):";
        cin >> choice;
    } while (choice != 'N');
    return 0;
}
