#include "Game_Litavrin.h"

Game_Litavrin::Game_Litavrin()
{
	player_number = 2;
	year = 1;
	phase = 1;
	enemy = 1;
}

Game_Litavrin::Game_Litavrin(int p_number)
{
	player_number = p_number;
	year = 1;
	phase = 1;
	enemy = 1;
}

Game_Litavrin::Game_Litavrin(const Game_Litavrin& game)
{
	this->player_number = game.player_number;
	this->phase = game.phase;
	this->year = game.year;
	this->enemy = game.enemy;
}

Game_Litavrin::~Game_Litavrin()
{

}

void Game_Litavrin::phase1()
{

}
void Game_Litavrin::phase3()
{

}
void Game_Litavrin::phase5()
{

}
void Game_Litavrin::phase7()
{

}
void Game_Litavrin::phase8()
{

}
void Game_Litavrin::defense_level(const char* enemy_name, int king_help)
{

}