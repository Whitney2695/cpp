#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the tic-tac-toe board
void displayBoard(const vector<vector<char>>& board) {
    cout << "\nTic-Tac-Toe Board\n";
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if a player has won the game
bool checkWin(const vector<vector<char>>& board, char symbol) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return true; // Row win
        }
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) {
            return true; // Column win
        }
    }
    // Check diagonals
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true; // Diagonal win
    }
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true; // Diagonal win
    }
    return false;
}

// Function to check if the board is full
bool checkDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; // Empty cell found, game not drawn
            }
        }
    }
    return true; // Board is full, game drawn
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    int row, col;
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!\n";
    displayBoard(board);

    // Game loop
    while (true) {
        // Get player's move
        cout << "Player " << currentPlayer << "'s turn. Enter row (1-3) and column (1-3) separated by space: ";
        cin >> row >> col;
        row--; // Convert to zero-based index
        col--; // Convert to zero-based index

        // Check if the cell is empty
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            // Update the board with player's move
            board[row][col] = currentPlayer;
            displayBoard(board);

            // Check if the current player has won
            if (checkWin(board, currentPlayer)) {
                cout << "Player " << currentPlayer << " wins!\n";
                break; // End game
            }

            // Check if the game is drawn
            if (checkDraw(board)) {
                cout << "The game is drawn!\n";
                break; // End game
            }

            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move! Please try again.\n";
        }
    }

    return 0;
}
