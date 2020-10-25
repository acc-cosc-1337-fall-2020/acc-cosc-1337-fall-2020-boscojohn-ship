//cpp
#include "tic_tac_toe.h"
#include <string>
#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;

tic_tac_toe::tic_tac_toe()
{
    char board[3][3] =
    { 
      {' ',' ',' '},
      {' ',' ',' '},
      {' ',' ',' '},
    };
}
bool tic_tac_toe::game_over()
{
    return check_board_full;
}

void tic_tac_toe::start_game(string first_player)
{
    string first_player ("X");
    clear_board ();
}

void tic_tac_toe::mark_board(int position)
{
    char player = 'X';
    char board[3][3] =
    { 
      {'1','2','3'},
      {'4','5','6'},
      {'7','8','9'},
    };

    cout<<"Enter the field you would like to occupy: ";
    cin>>position;
    if( position == 1)
    {
        board[0][0] = player;
    }
    else if( position == 2)
    {
        board[0][1] = player;
    }
    else if( position == 3)
    {
        board[0][2] = player;
    }
    else if( position == 4)
    {
        board[1][0] = player;
    }
    else if( position == 5)
    {
        board[1][1] = player;
    }
    else if( position == 6)
    {
        board[1][2] = player;
    }
    else if( position == 7)
    {
        board[2][0] = player;
    }
    else if( position == 8)
    {
        board[2][1] = player;
    }
    else if( position == 9)
    {
        board[2][2] = player;
    }

    set_next_player();
}

string get_player()
{
    string player = " ";
}
void tic_tac_toe::display_board() const
{
    char board[3][3] =
    { 
      {'1','2','3'},
      {'4','5','6'},
      {'7','8','9'},
    };

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<board[row][col]<< " ";
        }
        cout<<endl;
    }
}

void set_next_player(string player)
{
    if (player == "x")
        player = "O";
    else
        player = "X";

}

bool tic_tac_toe::check_board_full()
{
    bool board_full = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (board[row][col] = ' ')
                board_full = false;
        }
        cout<<endl;
    }
}

void tic_tac_toe::clear_board()
{
    char board[3][3] =
    { 
      {' ',' ',' '},
      {' ',' ',' '},
      {' ',' ',' '},
    };
}