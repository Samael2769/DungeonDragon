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
    if (_power < _atkCost) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _atkCost;
    std::cout << _name << " strikes with his sword." << std::endl;
    return _atkDmg;
}

int Knight::skill1()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _skillCost[0]) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _skillCost[0];
    std::cout << _name << " impales his enemy." << std::endl;
    return _skillDmg[0];
}

int Knight::skill2()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _skillCost[1]) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _skillCost[1];
    std::cout << _name << " impales his enemy." << std::endl;
    return _skillDmg[1];
}

int Knight::skill3()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _skillCost[2]) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _skillCost[2];
    std::cout << _name << " impales his enemy." << std::endl;
    return _skillDmg[2];
}

int Knight::skill4()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power < _skillCost[3]) {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
    _power -= _skillCost[3];
    std::cout << _name << " impales his enemy." << std::endl;
    return _skillDmg[3];
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
