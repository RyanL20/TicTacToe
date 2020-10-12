#include <iostream>
#include <cstring>

/*
 * Tic-Tac-Toe with user input of rows and columns (2 players)
 * Author: Ryan Le
 * Date: 10/11/2020
 */

using namespace std;
int board[4][4];
int BLANK = 0;
int X_MOVE = 1;
int O_MOVE = 2;
int X_TURN = 0;
int O_TURN = 1;
int turn = X_TURN;
int xWin = 0;
int oWin = 0;
char input[3];
int yesno;
int output;
void clearBoard();
void printBoard();
bool valid_input = 0;

int main() {
  //instructions
  cout << "Welcome to TicTacToe!" << endl;
  cout << "Instructions:" << endl;
  cout << "Enter a letter followed by a number." << endl;
  cout << "X starts first." << endl;
  cout << "--------------------" << endl;

 while (valid_input == 0) {
    cin.get(input, 3);
    cin.get();
    cout << input[0] << endl;

    if (input[0] != 'a' && input[0] !='b' && input[0] != 'c') {
      cout << "Row must be a, b, or c." << endl;
      valid_input = 0;
    }
    else if (input[1] != '1' && input[1] != '2' && input[1] != '3') {
      cout << "Column must be 1, 2, or 3." << endl;
      valid_input = 0;
    }
    else {
      valid_input = 1;
      printBoard();
    }
  }
}

void printBoard() {

}


