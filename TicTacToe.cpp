#include <iostream>
#include<ctime>
#include<stdio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;
char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'X';
bool match = false;
string Player1 = "";
string Player2 = "";
void tictactoe1()
{
    cout << "   |    |   \n";
    cout << " " << space[0][0] << " | " << space[0][1] << "  | " << space[0][2] << "\n";
    cout << "___|____|___\n";
    cout << "   |    |   \n";
    cout << " " << space[1][0] << " | " << space[1][1] << "  | " << space[1][2] << "\n";
    cout << "___|____|___\n";
    cout << "   |    |   \n";
    cout << " " << space[2][0] << " | " << space[2][1] << "  | " << space[2][2] << "\n";
    cout << "   |    |   \n";
}
void tictactoe2()
{
    int digit;
    if (token == 'X')
    {
        cout << Player1 << " Please enter between 1 to 9 ";
        cin >> digit;
    }
    if (token == '0')
    {
        cout << Player2 << " Please enter between 1 to 9 ";
        cin >> digit;
    }

    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else if (digit < 1 || digit > 9)
    {
        cout << "INVALID!!!" << endl;
    }
    if (token == 'X' && space[row][column] != 'X' && space[row][column] != '0')
    {
        space[row][column] = 'X';
        token = '0';
    }
    else if (token == '0' && space[row][column] != 'X' && space[row][column] != '0')
    {
        space[row][column] = '0';
        token = 'X';
    }
    else
    {
        cout << "There is no empty space!" << endl;
        tictactoe2();
    }
    tictactoe1();
}
bool tictactoe3()
{
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return true;
        }
        if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
        {
            return true;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (space[i][j] != 'X' && space[i][j] != '0')
                {
                    return false;
                }
            }
        }
    }
    match = true;
    return false;
}
int main()
{
    fflush(stdin);
    system("color 0C");
    system("cls");
    printf("\e[?251");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;
    cout << "\n\n\n\t\t\t  MLoading...  ";
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

    cout<<"           WELCOME TO TIC TAC TOE GAME               \n";
    cout << "Enter the name of Player1:\n";
    getline(cin, Player1);
    cout << "Enter the name of Player2:\n";
    getline(cin, Player2);
    cout << Player1 << " is player 1 so he will play first\n";
    cout << Player2 << " is player 2 so he will play second\n";

    while (!tictactoe3())
    {
        tictactoe1();
        tictactoe2();
        tictactoe3();
    }
    if (token == 'X' && match == false)
    {
        cout << Player2 << " Wins!!" << endl;
    }
    else if (token == '0' && match == false)
    {
        cout << Player1 << " Wins!!" << endl;
    }
    else
    {
        cout << " It's a draw!!" << endl;
    }
    return 0;
}