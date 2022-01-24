/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Priest
*/

#include "Priest.hpp"

void Priest::rest()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    std::cout << _name << " prays." << std::endl;
    _power += 100;
    _hp += 100;
    if (_power > 100)
        _power = 100;
    if (_hp > 100)
        _hp = 100;
}