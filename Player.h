#include "Creature.h"

#ifndef PLAYER_H
#define PLAYER_H

namespace Monster {
	class Player : public Creature
	{
	private :
		int playerLevel = 1;

	public :
		void levelUp()
		{
			playerLevel++;
			damage++;
		}

		int getLevel()
		{
			return playerLevel;
		}

		bool hasWon()
		{
			if (playerLevel += 20)
			{
				return true;
			}
			return false;
		}
	};
}
#endif // !PLAYER_H
