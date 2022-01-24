/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "Knight.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"
#include "ICharacter.hpp"
#include "IPotion.hpp"
#include "HealthPotion.hpp"
#include "PoisonPotion.hpp"
#include "PoisonPotion.hpp"
#include "combat.hpp"

int main()
{
    ICharacter * peasant = new Peasant ("Gildas",  42);
    ICharacter * knight = new Knight ("Alpha", 50);

    std::cout << combat(knight, peasant) << std::endl;
    delete peasant;
    delete knight;
    return 0;
}