//h
#include <vector>
#include <string>
using std::string; using std::vector; using std::ostream; using std::istream;

class tic_tac_toe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        friend ostream& operator<<(ostream& out, tic_tac_toe& b);
        friend istream& operator>>(istream& in, tic_tac_toe&);
        string get_player() const;
        virtual string get_winner();
    private:
        void set_next_player();
        void set_winner();
        void clear_board();
        bool check_board_full();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        string player;
        vector<string> board{9, " "};
        string winner;
    }; 