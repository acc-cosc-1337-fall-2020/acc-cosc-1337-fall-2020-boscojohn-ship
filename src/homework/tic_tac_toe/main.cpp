#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

int main() 
{
	tic_tac_toe game;
	char player = 'X';
	while (game.check_game_full() == false)
	{
		game.display_board();
		game.mark_board();
		game.set_next_player();
	}
	return 0;
}