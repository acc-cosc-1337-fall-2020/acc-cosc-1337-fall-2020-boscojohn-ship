#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

int main() 
{
	tic_tac_toe game;
	tic_tac_toe_manager manager;
	string choice = "Y";
	string player;

	do
	{
		cout<<"Enter X or O ";
		cin>>player;
		game.start_game(player);
		while (game.game_over() == false)
		{
			cout<<game;

			cin>>game;
		}
		int O = 0;
		int X = 0;
		int T = 0;

		manager.save_game(game);
		manager.get_winner_total(O, X, T);
		cout<< "X wins: "<<X;
		cout<< "O wins: "<<O;
		cout<< "T ties: "<<T;



		cout<<"Would you like to play again?(Y/N): ";
		cin>>choice;
	} while(choice == "Y");

	cout<<manager;
	return 0;
}