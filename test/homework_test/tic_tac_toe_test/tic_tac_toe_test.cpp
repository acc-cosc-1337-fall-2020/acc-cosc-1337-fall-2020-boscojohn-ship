#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	tic_tac_toe game;
	game.start_game("X");
	REQUIRE(game.get_player()=="X");
	REQUIRE(game.get_winner()=="X");
}
TEST_CASE("Test first player set to O")
{
	tic_tac_toe game;
	game.start_game("O");
	REQUIRE(game.get_player()=="O");
}
TEST_CASE("test game over if board is filled")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.get_winner()=="C");
}
TEST_CASE ("Test win by first column")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over()==false);
	game.mark_board(2);
	REQUIRE(game.game_over()==false);
	game.mark_board(4);
	REQUIRE(game.game_over()==false);
	game.mark_board(3);
	REQUIRE(game.game_over()==false);
	game.mark_board(7);
	
	REQUIRE(game.game_over()==true);
}
TEST_CASE ("Test win by second column")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(8);
	game.start_game("O");
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
}
TEST_CASE ("Test win by third column")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(9);
	game.start_game("O");
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
}
TEST_CASE ("Test win by first row")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	
	REQUIRE(game.game_over()==true);
}
TEST_CASE ("Test win by second row")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.start_game("O");
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
}
TEST_CASE ("Test win by third row")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	game.start_game("O");
}