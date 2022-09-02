#include "weapon.h"
#include <iostream>
using namespace std;

float weapon::criticalDamage(float normdamage, float luck) {
	float finalDamage = normdamage + (luck/ 10);
	return finalDamage;

}

