//h
#include <vector>
#include <string>
using std::string; using std::vector; using std::ostream; using std::istream;

class tic_tac_toe
{
    public:
        tic_tac_toe() = default;
        tic_tac_toe(int Size): board (Size*Size," "){}
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        friend ostream &operator<<(ostream &out, tic_tac_toe& b);
        friend istream &operator>>(istream &in, tic_tac_toe& b);
        string get_player() const;
        virtual string get_winner();

    protected:
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
        virtual bool check_board_full();
        vector<string> board;
    private:
        void set_next_player();
        void set_winner();
        void clear_board();
        string player;
        string winner;
    }; 