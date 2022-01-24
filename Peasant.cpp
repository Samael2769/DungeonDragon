/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Peasant
*/

#include "Peasant.hpp"

Peasant::~Peasant()
{
    std::cout << _name << " is back to his crops." << std::endl;
}

int Peasant::attack()
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
    std::cout << _name << " tosses a stone." << std::endl;
    return 5;
}

int Peasant::special()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << _name << " doesn't know any special move." << std::endl;
    return 0;
}

void Peasant::rest()
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    std::cout << _name << " takes a nap." << std::endl;
    _power += 30;
    if (_power > 100)
        _power = 100;
}

void Peasant::damage(int damage)
{
    if (_hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    _hp -= damage;
    if (_hp <= 0) {
        _hp = 0;
        std::cout << _name << " is out of combat." << std::endl;
    } else
        std::cout << _name << " takes " << damage << " damage." << std::endl;     
}

void Peasant::drink(const IPotion &potion)
{
    std::cout << _name << " drinks a mysterious potion." << std::endl;
    switch (potion.getType()) {
        case 0:
            _hp += potion.getValue();
            break;
        case 1:
            _power += potion.getValue();
            break;
        case 2:
            _hp += potion.getValue();
            break;
        default:
            break;
    }
    if (_hp > 100)
        _hp = 100;
    if (_hp < 0)
        _hp = 0;
    if (_power > 100)
        _power = 100;
}

void Peasant::drink(const PoisonPotion &potion)
{
    std::cout << _name << " has been poisoned." << std::endl;
    _hp += potion.getValue();
    if (_hp < 0)
        _hp = 0;
}
void Peasant::drink(const HealthPotion &potion)
{
    std::cout << _name << " feels rejuvenated." << std::endl;
    _hp += potion.getValue();
    if (_hp > 100)
        _hp = 100;
}
void Peasant::drink(const PowerPotion &potion)
{
    std::cout << _name << "'s power is restored." << std::endl;
    _power += potion.getValue();
    if (_power > 100)
        _power = 100;
}