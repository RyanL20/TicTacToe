#include <iostream>

/*
 * Tic-Tac-Toe with user input of rows and columns (2 players)
 * Author: Ryan Le
 * Date: 10/11/2020
 */

using namespace std;

int board[3][3];
int BLANK = 0;
int X_MOVE = 1;
int O_MOVE = 2;
int X_TURN = 0;
int O_TURN = 1;
int turn = X_TURN;
int xWin = 0;
int oWin = 0;

int main() {
  cout << "Welcome to TicTacToe!" << endl;
  cout << "Instructions:" << endl;
  cout << "Enter a letter followed by a number." << endl;
  cout << "X starts first." << endl;
  cout << "-------------------" << endl;

  
