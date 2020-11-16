//h
#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include <memory>

using std::string; using std::vector; using std::ostream; using std::unique_ptr;

class tic_tac_toe_manager: public tic_tac_toe
{
    public:
        void save_game(unique_ptr<tic_tac_toe> &b);
        friend ostream& operator<<(ostream& out, const tic_tac_toe_manager & manager);
        void get_winner_total(int& O, int& X, int& T);
        string get_winner();

    private:
        vector<unique_ptr<tic_tac_toe>>games;
        int X_win = 0;
        int O_win = 0;
        int Ties = 0;
        void update_winner_count(string winner);
};