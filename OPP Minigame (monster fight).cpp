#include <iostream>
enum  race
{
	troll,
	orc,
	goblin,
};

std::string RaceString(race _race) //here we replace values ??with letters so that the cards are more visible
{
	switch (_race)
	{
	case troll:
		return "troll";
		break;
	case orc:
		return "orc";
		break;
	case goblin:
		return "goblin";
		break;
	default:;
		return "mec ta encore foire";
	}


}


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
	Monster(int hp,int hpMax, int ad, int dp, int speed,int py, race r) :
		Health_Points(hp), Health_Max(hpMax), Attack_Damage(ad), Defense_Points(dp), Speed(speed),Parry(py), Race(r) {}
	void Display();
};

void Monster::Display()
{
	std::cout << "NOMBRE DE vie:" << Health_Points << "\n";
	std::cout << "NOMBRE D'attack:" << Attack_Damage << "\n";
	std::cout << "NOMBRE De defence:" << Defense_Points << "\n";
	std::cout << "NOMBRE DE speed:" << Speed << "\n";
	std::cout << "Race:" << RaceString(Race) << "\n";
}

void Parry(Monster* monster1)
{
	monster1->Defense_Points += 2;
	monster1->Parry += 1;
	std::cout << "le monstre se buff\n";
}


void Parrylost(Monster* monster1)
{
	monster1->Defense_Points -= 2;
	monster1->Parry -= 1;
}


void heal(Monster* monster1)
{
	int Liferecovery;
	Liferecovery = monster1->Health_Max - monster1->Health_Points ;
	Liferecovery *= 0.01;
	monster1->Health_Points += Liferecovery;
	std::cout << "le monstre se heal \n";
}

void attack(Monster* monster1, Monster* monster2)
{
	int dammage = 0;
	

	dammage = monster1->Attack_Damage - monster2->Defense_Points;
	if (dammage <= 0)
	{
		std::cout  << "il ne prende pas de degat\n";
		//monster2->Defense_Points -= 1;
	}
	else
	{
		monster2->Health_Points -= dammage;
		std::cout << "le monstre a pris " <<dammage << " de degats\n";

	}
	
}

int random()
{
	int randomValue = rand() % 20;
	return randomValue;
}

void actionmonster(Monster* monster1,Monster* monster2)
{

		if (monster1->Parry == 1)
		{
			Parrylost(monster1);
		}

		int a = random();
		std::cout << RaceString(monster1->Race) << "\n";
		if (a > 4)
		{
			attack(monster1, monster2);

		}
		else if (a >= 2)
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
	
}

int main()
{
	srand(time(0));
	int a;
	std::cout << "vous devez choisir le premier monstre \n";
	std::cin >> a;
	int b;
	std::cout << "vous devez choisir le deuxsieme monstre \n";
	std::cin >> b;



	Monster chuck(25,25, 15, 5,50, 0, orc);
	Monster bob(40,40, 10, 2, 40,0, goblin);
	Monster dobie(50,50, 20, 0, 20,0, troll);

	Monster* monster1 = {0};
	Monster* monster2 = {0};
	switch (a)
	{
	case 1:
		monster1 = &chuck;
		break;
	case 2:
		monster1 = &bob;
		break;
	case 3:
		monster1 = &dobie;
		break;
	}
	switch (b)
	{
	case 1:
		monster2 = &chuck;
		break;
	case 2:
		monster2 = &bob;
		break;
	case 3:
		monster2 = &dobie;
		break;
	}

	monster1->Display();
	monster2->Display();
	int roundcount= 0;
	do
	{
		if (monster1->Speed>monster2->Speed)
		{
			actionmonster(monster1, monster2);
			if (isdead(monster1))
			{
				break;
			}
			actionmonster(monster2, monster1);
			if (isdead(monster2))
			{
				break;
			}
		}
		if (monster1->Speed < monster2->Speed)
		{
			actionmonster(monster2, monster1);
			if (isdead(monster1))
			{
				break;
			}
			actionmonster(monster1, monster2);
			if (isdead(monster2))
			{
				std
				break;
			}
		}


		roundcount++;
		std::cout << "nombre de round: " << roundcount << "\n";
	}
	while (true);

	bob.Display();
	chuck.Display();

}
