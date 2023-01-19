#include "Player_Litavrin.h"

Player_Litavrin::Player_Litavrin()
{
	player_name = {};
	gold = 0;
	wood = 0;
	stone = 0;
	tokens = 0;
	dice1 = 0;
	dice2 = 0;
	dice3 = 0;
	reserve_dice = 0;
}

Player_Litavrin::Player_Litavrin(std::string p_name, int p_resource)
{
	player_name = p_name;

	switch (p_resource)
	{
	case(1):
	{
		this->gold = 1;
		this->wood = 0;
		this->stone = 0;
	}
	case(2):
	{
		this->gold = 0;
		this->wood = 1;
		this->stone = 0;
	}
	case(3):
	{
		this->gold = 0;
		this->wood = 0;
		this->stone = 1;
	}
	default:
		this->gold = 0;
		this->wood = 0;
		this->stone = 0;
		break;
	}

	tokens = 0;
	dice1 = 0;
	dice2 = 0;
	dice3 = 0;
	reserve_dice = 0;
}

Player_Litavrin::~Player_Litavrin()
{

}