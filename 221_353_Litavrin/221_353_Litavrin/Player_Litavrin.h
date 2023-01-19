#pragma once
#include "Game_Litavrin.h"
#include <vector>

class Player_Litavrin: public Game_Litavrin
{
protected:
	std::string player_name;
	int gold;
	int wood;
	int stone;
	int tokens;
	int dice1;
	int dice2;
	int dice3;
	int reserve_dice;

public:
	Player_Litavrin();
	Player_Litavrin(std::string p_name, int p_resource);
	~Player_Litavrin();

};
