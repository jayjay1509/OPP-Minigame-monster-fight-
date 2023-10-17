#pragma once
#include "monster.h"
#include "Race.h"

void Parry(Monster* monster1);
void Parrylost(Monster* monster1);
void heal(Monster* monster1);
void attack(Monster* monster1, Monster* monster2);
int random();
void actionmonster(Monster* monster1, Monster* monster2);
bool isdead(Monster* monster1);