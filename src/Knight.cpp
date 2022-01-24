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

//        int atk_cost = 10;
//        int _atk_dmg = 20;
//        int special_costs[4] = {20, 30, 45, 70};

int Knight::attack()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _atk_cost) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _atk_cost;
    std::cout << _name << " strikes with his sword." << std::endl;
    return _atk_dmg;
}

int Knight::special()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _special_costs[1]) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _special_costs[1];
    std::cout << _name << " impales his enemy." << std::endl;
    return _special_dmgs[1];
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
