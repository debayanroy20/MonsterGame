#ifndef CREATURE_H
#define CREATURE_H

namespace Monster {
    class Creature
    {

    private:
        std::string name;
        char symbol;
        int health, gold;
    protected : 
        int damage;

    public:
        Creature(std::string nm, char symbl, int hlt, int dmg, int gld)
        {

            name = nm;
            symbol = symbl;
            health = hlt;
            damage = dmg;
            gold = gld;
        }

        std::string getName()
        {

            return name;
        }

        int getHealth()
        {

            return health;
        }

        int getGold()
        {

            return gold;
        }

        void addGold(int g)
        {

            gold = gold + g;
        }

        void reduceHealth(int h)
        {

            health = health - h;
        }

        bool isDead()
        {

            if (health <= 0)
            {
                return true;
            }

            return false;
        }
    };
}

#endif // !CREATURE_H