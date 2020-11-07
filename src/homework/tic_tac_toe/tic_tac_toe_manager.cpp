//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>

using std::ostream; using std::string; using std::vector;

void tic_tac_toe_manager::save_game(const tic_tac_toe b)
{
    games.push_back(b);
    update_winner_count(get_winner());
}

ostream& operator<<(ostream & out, const tic_tac_toe_manager &manager)
{
    vector<tic_tac_toe> games;
    out <<manager;
    return out;
}

void tic_tac_toe_manager::get_winner_total(int& O, int& X, int& T)
{
    O ++;
    X ++;
    T ++;
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
