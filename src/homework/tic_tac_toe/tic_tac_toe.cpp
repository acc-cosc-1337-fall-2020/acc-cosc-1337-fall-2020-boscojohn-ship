//cpp
#include "tic_tac_toe.h"
#include <string>
#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;


string tic_tac_toe::get_player() const
{
    return player;
}
string tic_tac_toe::get_winner()
{
    return winner;
}
void tic_tac_toe::set_next_player (){
    if (player == "X")
        player == "O";
    else 
        player == "X";
}
void tic_tac_toe::set_winner (){
    if (player == "X")
        winner == "O";
    else 
        winner == "X";
}

void tic_tac_toe::clear_board()
{
     vector<string>board(9);
    board[0] = " ";
    board[1] = " ";
    board[2] = " ";
    board[3] = " ";
    board[4] = " ";
    board[5] = " ";
    board[6] = " ";
    board[7] = " ";
    board[8] = " ";
}

void tic_tac_toe::start_game(string first_player){
    player = first_player;
    clear_board(); 
}

void tic_tac_toe::mark_board(int position){
    if (position == 1)
        board[0] = player;
    else if (position == 2)
        board[1] = player;
    else if (position == 3)
        board[2] = player;
    else if (position == 4)
        board[3] = player;
    else if (position == 5)
        board[4] = player;
    else if (position == 6)
        board[5] = player;
    else if (position == 7)
        board[6] = player;
    else if (position == 8)
        board[7] = player;
    else if (position == 9)
        board[8] = player;
    set_next_player();
}

void tic_tac_toe::display_board() const{
    vector<string>board(9);
    board[0] = "1";
    board[1] = "2";
    board[2] = "3";
    board[3] = "4";
    board[4] = "5";
    board[5] = "6";
    board[6] = "7";
    board[7] = "8";
    board[8] = "9";
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[0] << "   |   " << board[1] << "   |   " << board[2] << endl;
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[3] << "   |   " << board[4] << "   |   " << board[5] << endl;
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[6] << "   |   " << board[7] << "   |   " << board[8] << endl;
}

bool tic_tac_toe::check_board_full(){
    bool full;
    if ((board[0] == " ") || (board[1] == " ") || (board[2] == " ") || (board[3] == " ") || (board[4] == " ") || (board[5] == " ") || (board[6] == " ") || (board[7] == " ") || (board[8] == " "))
        full = false;
    else
    {
        full = true;
    }
    return full;
    
}

bool tic_tac_toe::check_column_win(){
    if ((board[0] == "X" && board[3] == "X" && board[6] == "X") || (board[0] == "O" && board[3] == "O" && board[6] == "O") || (board[1] == "X" && board[4] == "X" && board[7] == "X") || (board[1] == "O" && board[4] == "O" && board[7] == "O") || (board[2] == "X" && board[5] == "X" && board[8] == "X") || (board[2] == "O" && board[5] == "O" && board[8] == "O"))
        return true;
    else
        return false;
}

bool tic_tac_toe::check_row_win(){
    if ((board[0] == "X" && board[1] == "X" && board[2] == "X") || (board[0] == "O" && board[1] == "O" && board[2] == "O") || (board[3] == "X" && board[4] == "X" && board[5] == "X") || (board[3] == "O" && board[4] == "O" && board[5] == "O") || (board[6] == "X" && board[7] == "X" && board[8] == "X") || (board[6] == "O" && board[7] == "O" && board[8] == "O"))
        return true;
    else
        return false;
}

bool tic_tac_toe::check_diagonal_win(){
    if ((board[0] == "X" && board[4] == "X" && board[8] == "X") || (board[0] == "O" && board[4] == "O" && board[8] == "O") || (board[6] == "X" && board[4] == "X" && board[2] == "X") || (board[6] == "O" && board[4] == "O" && board[2] == "O"))
        return true;
    else
        return false;   
}

bool tic_tac_toe::game_over(){
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
        return false;
    
}