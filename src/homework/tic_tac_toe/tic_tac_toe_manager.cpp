//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    update_winner_account(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_account(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    out<<"\nGame history\n";

    for(auto& game: manager.games)
    {
        out<<*game;
    }

    out<<"\nX wins: "<<manager.x_wins<<"\n";
	out<<"O wins: "<<manager.o_wins<<"\n";
	out<<"Ties  : "<<manager.ties<<"\n\n";

    return out;
}
TicTacToeManager::TicTacToeManager(&TicTacToeData)
{
    get_games();
    tic_tac_toe->start_game(player);
    update_winner_account();
}

TicTacToeManager::~TicTacToeManager()
{
    save_games();
}