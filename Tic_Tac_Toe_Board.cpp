#include <iostream>

using namespace std;

int main() {
const int ROWS = 3;
const int COLUMS = 3;
char board[ROWS][COLUMS] = {{'0', 'X', '0'},
                            {' ', 'X', 'X'},
                            {'X', '0', '0'}};
cout << "Here the tic-tac-toe board: \n";
for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLUMS; ++j) {
        cout << board[i][j];
    }
    cout << endl;
}
cout << "\n'X' moves to the empty location. \n\n";
board[1][0] = 'X';
cout << "Now the tic-tac-toe board is:\n";
for (int i =0; i < ROWS; ++i) {
    for (int j = 0; j < COLUMS; ++j) {
        cout << board[i][j];
    }
    cout << endl;
}
cout << "\n'X' wins!";
    return 0;
}