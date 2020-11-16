#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool tic_tac_toe_3::check_column_win(){
    if ((board[0] == "X" && board[3] == "X" && board[6] == "X") || 
    (board[0] == "O" && board[3] == "O" && board[6] == "O") || 
    (board[1] == "X" && board[4] == "X" && board[7] == "X") || 
    (board[1] == "O" && board[4] == "O" && board[7] == "O") || 
    (board[2] == "X" && board[5] == "X" && board[8] == "X") || 
    (board[2] == "O" && board[5] == "O" && board[8] == "O"))
        win = true;
    return win;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool tic_tac_toe_3::check_row_win()
{
    if ((board[0] == "X" && board[1] == "X" && board[2] == "X") || 
    (board[0] == "O" && board[1] == "O" && board[2] == "O") || 
    (board[3] == "X" && board[4] == "X" && board[5] == "X") || 
    (board[3] == "O" && board[4] == "O" && board[5] == "O") || 
    (board[6] == "X" && board[7] == "X" && board[8] == "X") || 
    (board[6] == "O" && board[7] == "O" && board[8] == "O"))
        win = true;
    return win;
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool tic_tac_toe_3::check_diagonal_win(){
    if ((board[0] == "X" && board[4] == "X" && board[8] == "X") || 
    (board[0] == "O" && board[4] == "O" && board[8] == "O") || 
    (board[6] == "X" && board[4] == "X" && board[2] == "X") || 
    (board[6] == "O" && board[4] == "O" && board[2] == "O"))
        win = true;
    return win;
}

//check if board is full
bool tic_tac_toe_3::check_board_full(){
    if ((board[0] == " ") || (board[1] == " ") || (board[2] == " ") || 
        (board[3] == " ") || (board[4] == " ") || (board[5] == " ") || 
        (board[6] == " ") || (board[7] == " ") || (board[8] == " "))
        full = false;
    return full;
}