#include "monster.h"

#include <iostream>

#include "Race.h"

Monster::Monster(int hp, int hpMax, int ad, int dp, int speed, int py, race r) :
	Health_Points(hp), Health_Max(hpMax), Attack_Damage(ad), Defense_Points(dp), Speed(speed), Parry(py), Race(r)
{}

void Monster::ResetStats()
{
	Health_Points = Health_Max;
}

void Monster::Display()
{
	std::cout << "NOMBRE DE vie:" << Health_Points << "\n";
	std::cout << "NOMBRE D'attack:" << Attack_Damage << "\n";
	std::cout << "NOMBRE De defence:" << Defense_Points << "\n";
	std::cout << "NOMBRE DE speed:" << Speed << "\n";
	std::cout << "Race:" << RaceString(Race) << "\n";
}