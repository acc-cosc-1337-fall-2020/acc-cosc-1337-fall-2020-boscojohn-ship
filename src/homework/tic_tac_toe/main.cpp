#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

int main() 
{
	tic_tac_toe game;
	int position;
	game.start_game("X");
	game.game_over();
	while (full == false)
	{
		cout<< "Enter a position: ";
		cin>> position;
		game.display_board();
		game.mark_board(position);
		game.display_board();
	}	
	return 0;
}