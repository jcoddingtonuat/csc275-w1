#pragma once
#include < iostream>
#include <string>
using namespace std;
class character
{
private:
	string name;
	int strength;
	int health;

public:
	character();
	character(string Name, int Strength, int Health);
	void display();

};