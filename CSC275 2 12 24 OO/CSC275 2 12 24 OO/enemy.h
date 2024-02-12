#pragma once
#include < iostream>
#include <string>
#include "character.h"
using namespace std;

class enemy : public character
{
private:
	int waitToSpawn;

public:
	enemy();
	enemy(string Name, int Strength, int Health, int WTS);
	void display();

};

