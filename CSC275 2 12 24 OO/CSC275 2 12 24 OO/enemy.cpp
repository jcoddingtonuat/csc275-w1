#include <iostream>
#include <string>
#include "character.h"
#include "enemy.h"


enemy::enemy() {}

enemy::enemy(string Name, int Strength, int Health, int WTS) : character(Name, Strength, Health)

{
	waitToSpawn = WTS;

}
void enemy::display()
{
	character::display();
	cout << "spawn time is " << waitToSpawn << endl;

}
