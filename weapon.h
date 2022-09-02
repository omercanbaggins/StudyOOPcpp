
#include <iostream>
#include <string>
using namespace std;

class weapon
{
public:
	float damage;
	string weaponType;

	float criticalDamage(float normdamage,float luck);  //some rpg games are use luck perk. Luck affect to gamer damage on this games
};

