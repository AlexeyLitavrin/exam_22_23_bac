#include <iostream>
#include <string>
#include <vector>

class Game_Litavrin
{
protected:
	int player_number;
	std::vector <std::string> player_order;
	std::vector <std::vector <std:: string>> vec_adviser;
	int year;
	int phase;
	int enemy;
public:
	Game_Litavrin();
	Game_Litavrin(int p_number);
	Game_Litavrin(const Game_Litavrin& game);
	~Game_Litavrin();

	void phase1();
	void phase3();
	void phase5();
	void phase7();
	void phase8();
	void defense_level(const char* enemy_name, int king_help);
};


