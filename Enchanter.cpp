/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Enchanter
*/

#include "Enchanter.hpp"

Enchanter::~Enchanter()
{
    std::cout << _name << " closes his spellbook." << std::endl;
}
int Enchanter::attack()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << _name << " don't know how to fight." << std::endl;
    return 0;
}

int Enchanter::special()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < 50) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= 50;
    std::cout << _name << " cast a fireball." << std::endl;
    return 99;
}

void Enchanter::rest()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    std::cout << _name << " meditates." << std::endl;
    _power += 100;
    if (_power > 100)
        _power = 100;
}


