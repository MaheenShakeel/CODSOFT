#include <iostream>
#include <windows.h>

using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displaygrid() {
    int grid[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Enter the number of the corresponding box you want to mark\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }
}

void updategrid(char grid[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int markgrid(char grid[3][3],int input,int player) {
    if(input==1) {
        if(player==1) {
            if(grid[0][0]!='O' && grid[0][0]!='X') {
                grid[0][0]='X';
                return 1;
            }
        }
        else {
            if(grid[0][0]!='O' && grid[0][0]!='X') {
                grid[0][0]='O';
                return 1;
            }
        }
    }
    else if(input==2) {
        if(player==1) {
            if(grid[0][1]!='O' && grid[0][1]!='X') {
                grid[0][1]='X';
                return 1;
            }
        }
        else {
            if(grid[0][1]!='O' && grid[0][1]!='X') {
                grid[0][1]='O';
                return 1;
            }
        }
    }
    else if(input==3) {
        if(player==1) {
            if(grid[0][2]!='O' && grid[0][2]!='X') {
                grid[0][2]='X';
                return 1;
            }
        }
        else {
            if(grid[0][2]!='O' && grid[0][2]!='X') {
                grid[0][2]='O';
                return 1;
            }
        }
    }
    else if(input==4) {
        if(player==1) {
            if(grid[1][0]!='O' && grid[1][0]!='X') {
                grid[1][0]='X';
                return 1;
            }
        }
        else {
            if(grid[1][0]!='O' && grid[1][0]!='X') {
                grid[1][0]='O';
                return 1;
            }
        }
    }
    else if(input==5) {
        if(player==1) {
            if(grid[1][1]!='O' && grid[1][1]!='X') {
                grid[1][1]='X';
                return 1;
            }
        }
        else {
            if(grid[1][1]!='O' && grid[1][1]!='X') {
                grid[1][1]='O';
                return 1;
            }
        }
    }
    else if(input==6) {
        if(player==1) {
            if(grid[1][2]!='O' && grid[1][2]!='X') {
                grid[1][2]='X';
                return 1;
            }
        }
        else {
            if(grid[1][2]!='O' && grid[1][2]!='X') {
                grid[1][2]='O';
                return 1;
            }
        }
    }
    else if(input==7) {
        if(player==1) {
            if(grid[2][0]!='O' && grid[2][0]!='X') {
                grid[2][0]='X';
                return 1;
            }
        }
        else {
            if(grid[2][0]!='O' && grid[2][0]!='X') {
                grid[2][0]='O';
                return 1;
            }
        }
    }
    else if(input==8) {
        if(player==1) {
            if(grid[2][1]!='O' && grid[2][1]!='X') {
                grid[2][1]='X';
                return 1;
            }
        }
        else {
            if(grid[2][1]!='O' && grid[2][1]!='X') {
                grid[2][1]='O';
                return 1;
            }
        }
    }
    else if(input==9) {
        if(player==1) {
            if(grid[2][2]!='O' && grid[2][2]!='X') {
                grid[2][2]='X';
                return 1;
            }
        }
        else {
            if(grid[2][2]!='O' && grid[2][2]!='X') {
                grid[2][2]='O';
                return 1;
            }
        }
    }
    return 0;
}

int gameWon(char grid[3][3]) {
    if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X') {
        return 1;
    }
    else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X') {
        return 1;
    }
    else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X') {
        return 1;
    }
    else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X') {
        return 1;
    }
    else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X') {
        return 1;
    }
    else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X') {
        return 1;
    }
    else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X') {
        return 1;
    }
    else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X') {
        return 1;
    }
    else {
        if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O') {
            return 2;
        }
        else if(grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O') {
            return 2;
        }
        else if(grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O') {
            return 2;
        }
        else if(grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O') {
            return 2;
        }
        else if(grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O') {
            return 2;
        }
        else if(grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O') {
            return 2;
        }
        else if(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O') {
            return 2;
        }
        else if(grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O') {
            return 2;
        }
        else {
            return 3;
        }
    }
}

bool playAgain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

void takeInput() {
    bool play = true;
    while (play) {
        int i = 0, gamewon = 0, input, turns = 0;
        char grid[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
        displaygrid();
        Sleep(2000);
        while (turns < 9) {
            system("cls");
            displaygrid();
            cout << endl << endl;
            updategrid(grid);
            cout << "Player " << i + 1 << "'s turn\nEnter where you want to mark:";
            cin >> input;
            if (input > 0 && input < 10) {
                if (markgrid(grid, input, i + 1) == 1) {
                    i = !(i);
                    turns = turns + 1;
                    gamewon = gameWon(grid);
                    if (gamewon == 1 || gamewon == 2) {
                        break;
                    }
                }
            } else {
                cout << "Wrong Input\n";
                Sleep(2000);
                continue;
            }
        }
        system("cls");
        if (gamewon == 1) {
            updategrid(grid);
            setColor(10); // Set color to green
            cout << "Player 1 won";
            setColor(15); // Reset color
        } else if (gamewon == 2) {
            updategrid(grid);
            setColor(12); // Set color to red
            cout << "Player 2 won";
            setColor(15); // Reset color
        } else {
            updategrid(grid);
            setColor(14); // Set color to yellow
            cout << "It was a Draw";
            setColor(15); // Reset color
        }
        play = playAgain();
    }
}

int main() {
    takeInput();
    return 0;
}
