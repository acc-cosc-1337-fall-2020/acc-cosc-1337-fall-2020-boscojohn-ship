#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Plays tic tac toe")
{
	tic_tac_toe game;
	REQUIRE(game.start_game("X"))
	REQUIRE(game.mark_board(1) == "X");
	REQUIRE(game.mark_board(2) == "O");
	REQUIRE(game.mark_board(3) == "X");
	REQUIRE(game.mark_board(4) == "O");
	REQUIRE(game.mark_board(5) == "X");
	REQUIRE(game.mark_board(6) == 'O');
	REQUIRE(game.mark_board(7) = 'X');
	REQUIRE(game.mark_board(9) == 'O');
	REQUIRE(game.mark_board(8) == 'X');
}

