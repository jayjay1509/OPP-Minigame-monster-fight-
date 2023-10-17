
#include <cstdlib>
#include <iostream>
#include "monster.h"

void Parry(Monster* monster1)
{
	monster1->Defense_Points += 2;
	monster1->Parry += 1;
	std::cout << "le monstre " << RaceString(monster1->Race) << " se buff\n";
}


void Parrylost(Monster* monster1)
{
	monster1->Defense_Points -= 2;
	monster1->Parry -= 1;
}


void heal(Monster* monster1)
{
	int Liferecovery;
	Liferecovery = monster1->Health_Max - monster1->Health_Points;
	Liferecovery *= 0.2;
	monster1->Health_Points += Liferecovery;
	std::cout << "le monstre " << RaceString(monster1->Race) << " se heal \n\n";
}

void attack(Monster* monster1, Monster* monster2)
{
	int dammage = 0;


	dammage = monster1->Attack_Damage - monster2->Defense_Points;
	if (dammage <= 0)
	{
		std::cout << RaceString(monster2->Race) << " ne prende pas de degat\n\n";
		//monster2->Defense_Points -= 1;
	}
	else
	{
		monster2->Health_Points -= dammage;
		std::cout << "le monstre " << RaceString(monster2->Race) << " a pris " << dammage << " de degats\n\n";

	}

}

int random()
{
	int randomValue = rand() % 20;
	return randomValue;
}


void actionmonster(Monster* monster1, Monster* monster2)
{

	if (monster1->Parry == 1)
	{
		Parrylost(monster1);
	}

	int a = random();
	std::cout <<"c'est le tour au " << RaceString(monster1->Race) << "\n";
	if (a > 6)
	{
		attack(monster1, monster2);

	}
	else if (a >= 3)
	{
		Parry(monster1);
	}
	else
	{
		heal(monster1);
	}


}

bool isdead(Monster* monster1)
{
	if (monster1->Health_Points <= 0)
	{
		return true;
	}
	return false;

}