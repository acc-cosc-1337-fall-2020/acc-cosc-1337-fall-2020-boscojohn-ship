//cpp
#include "tic_tac_toe_data.h"


/*std::vector<std::unique_ptr<TicTacToe>>& boards()
{
    std::ofstream out_file;
    out_file.open("game.dat");

    std::vector <std::string> pegs;

    while (get_line(read_file, line));
}*/

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
//Open file for writing
    std::ofstream file_out;
    file_out.open(file_name);
    for (auto &data: games)
    {
            for (auto string: pegs)
            {
                file_out<<games.pegs;
            }
        file_out<<get_winner();
        file_out<<" ";
    }

    file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::ofstream file_out;
    file_out.open(file_name);
    std::ifstream read_file(file_name);

    std::vector<std::string> pegs;

    while getline(read_line, line)
    {
        for (auto ch: line - 1)
        {
            std::string(line, ch);
            pegs.push_back(pegs);
        }
        
    std::string winner;
    std::unique_ptr<TicTacToe> board;
    if (std::vector<std::string> size = 9)
    {
        std::make_unique<TicTacToe3> board {pegs, winner};
    }
    else
    {
        std::make_unique<TicTacToe4> board {pegs, winner};
    }
    pegs.push_back(board);

    read_file.close();
    }

    return boards;

}