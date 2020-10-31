//h
#include <vector>
#include <string>
using std::string; using std::vector;

class tic_tac_toe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
        string get_player() const;
        string get_winner();


    private:
        void set_next_player();
        void set_winner();
        void clear_board();
        bool check_board_full();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        string player;
        vector<string> board;
        string winner;
    };