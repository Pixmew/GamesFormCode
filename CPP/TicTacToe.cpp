#include <iostream>
using namespace std;

char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board(string n1, string n2);

int main()
{
    int player = 1, i, choice;

    //Setting Player Name
    string Player1Name, Player2Name;

    cout << "Enter a Name Player 1 : ";
    cin >> Player1Name;

    cout << "Enter a Name Player 2 : ";
    cin >> Player2Name;


    char mark;
    do
    {
        board(Player1Name, Player2Name);
        player = (player % 2) ? 1 : 2;

        if (player == 1) {
            cout << Player1Name << " enter a number : ";
        }
        else if (player == 2) {
            cout << Player2Name << " enter a number : ";
        }

        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout << "Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();

        player++;
    } while (i == -1);
    board(Player1Name, Player2Name);
    if (i == 1)
        if (--player == 1) {
            cout << "==>\aPlayer :" << Player1Name << " win ";
        }
        else if (--player == 2) {
            cout << "==>\aPlayer :" << Player2Name << " win ";
        }

        else
            cout << "==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}


int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
        && square[4] != '4' && square[5] != '5' && square[6] != '6'
        && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}



void board(string n1, string n2)
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << n1 << " (X)  -  " << n2 << " (O)" << endl << endl;
    cout << endl;

    cout << "         |         |       " << endl;
    cout << "         |         |       " << endl;
    cout << "    " << square[1] << "    |    " << square[2] << "    |    " << square[3] << endl;


    cout << "         |         |       " << endl;
    cout << "_________|_________|_________" << endl;
    cout << "         |         |       " << endl;
    cout << "         |         |       " << endl;


    cout << "    " << square[4] << "    |    " << square[5] << "    |    " << square[6] << endl;

    cout << "         |         |       " << endl;
    cout << "_________|_________|_________" << endl;
    cout << "         |         |       " << endl;
    cout << "         |         |       " << endl;

    cout << "    " << square[7] << "    |    " << square[8] << "    |    " << square[9] << endl;
    cout << "         |         |       " << endl;
    cout << "         |         |       " << endl << endl;
}