#include <iostream>
#include <string>
#include "character.h"
#include "enemy.h"


int main()
{
	character c1;
	character c2("Yolanda", 42, 5);
	c2.display();

	enemy e1("Bad guy", 5, 40, 22);
	e1.display();
	return 0;
}
