//h
#include <string>
using std::string;

class tic_tac_toe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        void display_board() const;
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        string player = "X";
        char board[3][3];
    };