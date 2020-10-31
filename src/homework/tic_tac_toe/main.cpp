#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

int main() 
{
	tic_tac_toe game;
	string choice = "Y";
	int position;
	cout<<"Would you like to play the game?(Y/N): ";
	cin>>choice;
	do
	{
		game.start_game("X");
		while (game.game_over() == false)
		{
			game.display_board();
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
		}
		cout<<"Would you like to play again?(Y/N): ";
		cin>>choice;

	} while(choice == "Y");

	return 0;
}