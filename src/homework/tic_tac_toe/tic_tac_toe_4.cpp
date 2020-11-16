#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool tic_tac_toe_4::check_column_win(){
    if ((board[0] == "X" && board[4] == "X" && board[8] == "X" && board[12] == "X") || 
    (board[0] == "O" && board[4] == "O" && board[8] == "O" && board[12] == "X") || 
    (board[1] == "X" && board[5] == "X" && board[9] == "X" && board[13] == "X") || 
    (board[1] == "O" && board[5] == "O" && board[9] == "O" && board[13] == "X") || 
    (board[2] == "X" && board[6] == "X" && board[10] == "X" && board[14] == "X") || 
    (board[2] == "O" && board[6] == "O" && board[10] == "O" && board[14] == "X") || 
    (board[3] == "X" && board[7] == "X" && board[11] == "X" && board[15] == "X") || 
    (board[3] == "O" && board[7] == "O" && board[11] == "O" && board[15] == "X"))
        win = true;
    return win;
   }



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool tic_tac_toe_4::check_row_win(){
    if ((board[0] == "X" && board[1] == "X" && board[2] == "X" && board[3] == "X") || 
    (board[0] == "O" && board[1] == "O" && board[2] == "O" && board[3] == "X") || 
    (board[4] == "X" && board[5] == "X" && board[6] == "X" && board[7] == "X") || 
    (board[4] == "O" && board[5] == "O" && board[6] == "O" && board[7] == "X") || 
    (board[8] == "X" && board[9] == "X" && board[10] == "X" && board[11] == "X") || 
    (board[8] == "O" && board[9] == "O" && board[10] == "O" && board[11] == "X") || 
    (board[12] == "X" && board[13] == "X" && board[14] == "X" && board[15] == "X") || 
    (board[12] == "O" && board[13] == "O" && board[14] == "O" && board[15] == "X"))
        win = true;
    return win;
   }

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool tic_tac_toe_4::check_diagonal_win(){
    if ((board[0] == "X" && board[5] == "X" && board[10] == "X" && board[15] == "X") || 
    (board[0] == "O" && board[5] == "O" && board[10] == "O" && board[15] == "X") || 
    (board[3] == "X" && board[6] == "X" && board[9] == "X" && board[12] == "X") || 
    (board[3] == "O" && board[6] == "O" && board[9] == "O" && board[12] == "X"))
        win = true;
    return win;
}

// checks if board is full
bool tic_tac_toe_4::check_board_full(){
    if ((board[0] == " ") ||  (board[1] == " ") || (board[2] == " ") || (board[3] == " ") || 
    (board[4] == " ") || (board[5] == " ") || (board[6] == " ") || (board[7] == " ") || 
    (board[8] == " ") || (board[9] == " ") || (board[10] == " ") || (board[11] == " ") || 
    (board[12] == " ") || (board[13] == " ") || (board[14] == " ") || (board[15] == " "))
        full = false;
    return full;
}