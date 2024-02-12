#include <iostream>
#include <string>
#include "character.h"

character::character() {}

character::character(string Name, int Strength, int Health)
{
	name = Name;
	strength = Strength;
	health = Health;
}

void character::display()
{

	cout << "name = " << name << endl;
	cout << "strength = " << strength << endl;
	cout << "health = " << health << endl;
}