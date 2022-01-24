/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Knight
*/

#include "Knight.hpp"

Knight::~Knight()
{
    std::cout << _name << " takes off his armor." << std::endl;
}

int Knight::attack()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < 10) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= 10;
    std::cout << _name << " strikes with his sword." << std::endl;
    return 20;
}

int Knight::special()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < 30) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= 30;
    std::cout << _name << " impales his enemy." << std::endl;
    return 50;
}

void Knight::rest()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    std::cout << _name << " eats." << std::endl;
    _power += 50;
    if (_power > 100)
        _power = 100;
}
