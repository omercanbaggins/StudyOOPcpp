using namespace std;

#include <windows.h>

#include <string>
#include "weapon.h"

#include <iostream>

class Char {

public:
    float luck;
    void fire(string weapontype, float damage) {
        if (weapontype == "machine") {
            for (int i = 0; i < 15; i++) {
                cout << damage << endl;
            }

        }
        else {    //for single weapon
            for (int i = 0; i < 15; i++) {
                cout << damage << ",Weapon will be ready in 1 second." << endl;
                Sleep(1000);
            }

        }
    };
    
};



int main()

{
    cout << "Please enter variables step by step" << endl;

    int lck; string wpname; int wpdamage;

    cout << "Character Luck:";
    
    cin >> lck; 

    cout << "Weapon Type ('machine' or 'single'):";

    cin >> wpname;

    cout << "Weapon Damage:";

    cin >> wpdamage;


    Char mainchar;
    mainchar.luck =lck;

    weapon silah1;
    silah1.damage = wpdamage;
    silah1.weaponType = wpname;

    float finalDamage = silah1.criticalDamage(silah1.damage, mainchar.luck);
    string weapontype = silah1.weaponType;
    
    mainchar.fire(weapontype, finalDamage);



}