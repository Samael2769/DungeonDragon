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

static void do_special(ICharacter *p, ICharacter *p2)
{
    while (1) {
        std::cout << "------- Chose your skill -------" << std::endl;
        std::string skill;
        std::getline(std::cin, skill);
        int nb = std::stoi(skill);

        switch (nb) {
            case 1:
                p2->damage(p->skill1());
                break;
            case 2:
                p2->damage(p->skill2());
                break;
            case 3:
                p2->damage(p->skill3());
                break;
            case 4:
                p2->damage(p->skill4());
                break;
            default:
                break;
        }
        if (nb < 1 || nb > 4)
            continue;
        break;
    }
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
                do_special(p, p2);
        else if (attack == "rest")
            p->rest();
        else if (attack == "smite")
            p2->damage(800);
        else
            continue;
        break;
    }
}

static void mini_ia(ICharacter *p1, ICharacter *p2)
{
    std::cout << "-----------" << p2->getName() << " Attack" << "----------" << std::endl;
    if (p2->getPower() > 50)
        p1->damage(p2->skill1());
    else if (p2->getPower() > 20)
        p1->damage(p2->attack());
    else
        p2->rest();
}

bool combat(ICharacter *p1, ICharacter *p2)
{
    std::cout << "You entered the territory of " << p1->getName() << std::endl;
    

    while (p1->getHp() > 0 && p2->getHp() > 0) {
        print_stats(p1);
        print_stats(p2);
        chose_attack(p1, p2);
        mini_ia(p1, p2);
    }
    if (p1->getHp() == 0)
        return false;
    else
        return true;
}