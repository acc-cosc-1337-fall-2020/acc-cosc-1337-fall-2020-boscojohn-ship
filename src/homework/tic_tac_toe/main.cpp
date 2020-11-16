#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include <memory>
using std::cout; using std::cin; using std::string; using std::unique_ptr;

int main() 
{
	tic_tac_toe_manager manager;
	unique_ptr<tic_tac_toe> game;
	string choice = "Y";
	string player;
	int type = 3;

	cout<<"Would you like to play 3x3(3) or 4x4(4): ";
	cin>>type;
	do
	{
	do
	{
		cout<<"Enter X or O ";
		cin>>player;
		game->start_game(player);
		while (game->game_over() == false)
		{
			cout<<game;
			cin>>game;
		}
		int O = 0;
		int X = 0;
		int T = 0;

		manager.save_game;
		manager.get_winner_total(O, X, T);
		cout<< "X wins: "<<X;
		cout<< "O wins: "<<O;
		cout<< "T ties: "<<T;



		cout<<"Would you like to play again?(Y/N): ";
		cin>>choice;
	} while(choice == "Y");
	cout<<manager;
	cout<<"Would you like to play 3x3(3) or 4x4(4): ";
	cin>>type;
	}while(type = 3);
	do
	{
	do
	{
		cout<<"Enter X or O ";
		cin>>player;
		game->start_game(player);
		while (game->game_over() == false)
		{
			cout<<game;
			cin>>game;
		}
		int O = 0;
		int X = 0;
		int T = 0;

		manager.save_game;
		manager.get_winner_total(O, X, T);
		cout<< "X wins: "<<X;
		cout<< "O wins: "<<O;
		cout<< "T ties: "<<T;



		cout<<"Would you like to play again?(Y/N): ";
		cin>>choice;
	} while(choice == "Y");
	cout<<manager;
	cout<<"Would you like to play 3x3(3) or 4x4(4): ";
	cin>>type;
	}while(type = 4);
	return 0;
}