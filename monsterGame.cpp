#include <iostream>
#include <string>
#include "Creature.h"
#include "Player.h"


int main()
{
    /*Monster::Creature o{"orc",'o',4,2,10};
    o.addGold(5);
    o.reduceHealth(1);
    std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n";*/

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    Monster::Creature o{ name,'@',10,1,0};
    std::cout << "Welcome, " << o.getName() <<".\n";
    std::cout << "You have " << o.getHealth() << " health and are carrying " << o.getGold() << " gold.";

    return 0;

}
