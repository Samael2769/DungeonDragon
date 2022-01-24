/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** combat
*/

#include "ICharacter.hpp"
#include <iostream>
#include <iomanip>

static void print_stats(ICharacter *p)
{
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "|    " << p->getName() << "    HP: " << p->getHp() << "    PP: " << p->getPower()  << "    |" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}

static void chose_attack(ICharacter *p, ICharacter *p2)
{
    std::string attack;
    while (1) {
        std::cout << " -----  Enter your attack  -----" << std::endl;
        std::getline(std::cin, attack);
        if (attack == "attack")
            p2->damage(p->attack());
        else if (attack == "special")
                p2->damage(p->special());
        else if (attack == "rest")
            p->rest();
        else if (attack == "smite")
            p2->damage(800);
        else
            continue;
        break;
    }
}

bool combat(ICharacter *p1, ICharacter *p2)
{
    std::cout << "You entered the territory of " << p1->getName() << std::endl;
    

    while (p1->getHp() > 0 && p2->getHp() > 0) {
        print_stats(p1);
        print_stats(p2);
        chose_attack(p1, p2);
    }
    if (p1->getHp() == 0)
        return false;
    else
        return true;
}