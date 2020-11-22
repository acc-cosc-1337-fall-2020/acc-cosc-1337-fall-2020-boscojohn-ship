#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>

#ifndef TIC_TAC_TOE_DATA
#define TIC_TAC_TOE_DATA

class TicTacToeData: public TicTacToe
{
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();

private:
    const std::string file_name{"game.dat"};
    std::string data;

};

#endif