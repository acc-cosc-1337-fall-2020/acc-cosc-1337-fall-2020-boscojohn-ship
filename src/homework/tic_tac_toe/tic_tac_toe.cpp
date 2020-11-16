//cpp
#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>

using std::string; using std::cout; using std::cin; using std::endl; using std::ostream;

string tic_tac_toe::get_player() const
{
    return player;
}
string tic_tac_toe::get_winner()
{
    return winner;
}

ostream & operator<<(ostream &out, tic_tac_toe &b )
{
    out<< "This is the game board"<< "\n";
    out<<*b.board;
    return out;
}
istream & operator<<(istream & in, tic_tac_toe &b)
{
    int position;
    cout << "Enter position: ";
    in >> position;

    b.mark_board(position);

    return in;

}
void tic_tac_toe::set_next_player (){
    if (player == "X")
        player = "O";
    else 
        player = "X";
}
void tic_tac_toe::set_winner (){
    if (player == "X")
        winner = "O";
    else {
        winner = "X";
    }
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
    board[position-1] = player;
    if (game_over() == false)
        set_next_player();
}

/*void tic_tac_toe::display_board() const{
   
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[0] << "   |   " << board[1] << "   |   " << board[2] << endl;
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[3] << "   |   " << board[4] << "   |   " << board[5] << endl;
    cout << "   " << "    |   " << "    |   " << endl;
    cout << "   " << board[6] << "   |   " << board[7] << "   |   " << board[8] << endl;
}*/

bool tic_tac_toe::check_board_full(){
    return true;
    
}

bool tic_tac_toe::check_column_win(){
    return false;
}

bool tic_tac_toe::check_row_win(){
    return false;
}

bool tic_tac_toe::check_diagonal_win(){
    
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