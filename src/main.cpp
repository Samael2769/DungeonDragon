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
    srandom(time(NULL));
    ICharacter * enchanter = new Enchanter ("Gildas",  100);
    ICharacter * knight = new Knight ("Alpha", 50);

    std::cout << combat(knight, enchanter) << std::endl;
    delete enchanter;
    delete knight;
    return 0;
}