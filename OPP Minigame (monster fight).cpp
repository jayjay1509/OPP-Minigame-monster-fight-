#include <iostream>

#include "monster.h"
#include "Race.h"
#include "tools.h"


int main()
{
	srand(time(0));
	Monster jayson(30, 30, 25, 2, 50, 0, orc);
	Monster mishuu(35, 35, 9, 10, 40, 0, goblin);
	Monster green(25, 25, 15, 2, 20, 0, troll);

	std::cout << "le Monstre 1 S'appelle jayson \n";
	jayson.Display();
	std::cout << "\n";
	std::cout << "le Monstre 2 S'appelle mishuu \n";
	mishuu.Display();
	std::cout << "\n";
	std::cout << "le Monstre 3 S'appelle green \n";
	green.Display();
	std::cout << "\n";
	int a;
	int b;

	do 
	{
		std::cout << "vous devez choisir le premier monstre \n";
		std::cin >> a;
		std::cout << "vous devez choisir le deuxième monstre \n";
		std::cin >> b;

		if (a == b)
		{
			std::cout << "Vous ne pouvez pas choisir le meme monstre pour les deux cotes de la bataille. Réessayez.\n";
		}

	} while (a == b);

	Monster* monster1 = {0};
	Monster* monster2 = {0};
	switch (a)
	{
	case 1:
		monster1 = &jayson;
		break;
	case 2:
		monster1 = &mishuu;
		break;
	case 3:
		monster1 = &green;
		break;
	}
	switch (b)
	{
	case 1:
		monster2 = &jayson;
		break;
	case 2:
		monster2 = &mishuu;
		break;
	case 3:
		monster2 = &green;
		break;
	}
	std::system("cls");

	std::cout << "le Monstre 1 \n";
	monster1->Display();
	std::cout << "\n";

	std::cout << "le Monstre 2 \n";
	monster2->Display();
	std::cout << "\n";

	int victoirmonster1 = 0;
	int victoirmonster2 = 0;

	for (int i = 0; i < 1; i++)
	{
		int roundcount = 1;
		do
		{
			if (monster1->Speed > monster2->Speed)
			{
				std::cout << "Round : " << roundcount << "\n\n";
				actionmonster(monster1, monster2);
				roundcount++;
				if (isdead(monster2) == true)
				{
					std::cout << "le monstre " << RaceString(monster2->Race) << " est mort \n";
					victoirmonster1++;
					break;
				}
				std::cout << "Round : " << roundcount << "\n\n";
				actionmonster(monster2, monster1);
				roundcount++;
				if (isdead(monster1) == true)
				{
					std::cout << "le monstre " << RaceString(monster1->Race) << " est mort \n";
					victoirmonster2++;
					break;
				}
			}
			if (monster1->Speed < monster2->Speed)
			{
				std::cout <<"Round : " << roundcount << "\n\n";
				actionmonster(monster2, monster1);
				roundcount++;
				if (isdead(monster1) == true)
				{
					std::cout << "le monstre " << RaceString(monster1->Race) << " est mort \n";
					victoirmonster2++;
					break;
				}
				std::cout << "Round : " << roundcount << "\n\n";
				actionmonster(monster1, monster2);
				roundcount++;
				if (isdead(monster2) == true)
				{
					std::cout << "le monstre " << RaceString(monster2->Race) << " est mort \n";
					victoirmonster1++;
					break;
				}
			}

		} while (true);

		std::cout << "le Monstre 1 \n";
		monster1->Display();
		std::cout << "\n";

		std::cout << "le Monstre 2 \n";
		monster2->Display();
		std::cout << "\n";

		monster1->ResetStats();
		monster2->ResetStats();
	}
	
	std::cout << RaceString(monster1->Race) << " : " << victoirmonster2 << "\n";
	std::cout << RaceString(monster2->Race) << " : " << victoirmonster1 << "\n";
}
