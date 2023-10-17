#include "Race.h"

#include <string>

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
