//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <memory>

using std::ostream; using std::string; using std::vector; using std:: unique_ptr; using std::move;

void tic_tac_toe_manager::save_game(unique_ptr<tic_tac_toe> &b)
{
    update_winner_count(b->get_winner());
    games.push_back(move(b));
}

ostream& operator<<(ostream & out, const tic_tac_toe_manager &manager)
{
    vector<tic_tac_toe> games;
    for(auto& game: games)
        out<<game;
    return out;
}

void tic_tac_toe_manager::get_winner_total(int& O, int& X, int& T)
{
    O = O_win;
    X = X_win;
    T = Ties;
}

void tic_tac_toe_manager::update_winner_count(string winner)
{
    if (winner == "O")
        O_win += 1;
    else if (winner == "X")
        X_win += 1;
    else
        Ties += 1;
}
