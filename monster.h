#pragma once
#include "Race.h"


class Monster
{
public:
	int Health_Points;
	int Health_Max;
	int Attack_Damage;
	int Defense_Points;
	int Speed;
	int Parry;
	race Race;
	Monster(int hp, int hpMax, int ad, int dp, int speed, int py, race r);
	void Display();
	void ResetStats();
};


