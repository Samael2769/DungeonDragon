/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Dragon
*/

#include "Dragon.hpp"

using namespace std;

Dragon::Dragon() : _hp(500), _power(250), _maxHp(500), _maxPower(250)
{
}

Dragon::~Dragon()
{
}

int Dragon::attack()
{
    int cost = 40;
    int dmg = 30;

    if (_hp <= 0) {
        cout << "The dragon is out of combat !" << endl;
        return 0;
    }
    if (_power < cost) {
        cout << "The dragon is out of power !" << endl;
        return 0;
    }
    _power -= cost;
    return dmg;
}

int Dragon::special()
{
    int cost = 130;
    int dmg = 90;

    if (_hp <= 0) {
        cout << "The dragon is out of combat !" << endl;
        return 0;
    }
    if (_power < cost) {
        cout << "The dragon is out of power !" << endl;
        return 0;
    }
    _power -= cost;
    return dmg;
}

void Dragon::rest()
{
    if (_hp <= 0) {
        std::cout << "The dragon is out of combat !" << std::endl;
        return;
    }
    std::cout << "The dragon stares at you menacingly but stays immobile." << std::endl;
    _power += 60;
    if (_power > _maxPower)
        _power = _maxPower;
}

void Dragon::damage(int damage)
{
    if (_hp <= 0) {
        std::cout << "The dragon is out of combat !" << std::endl;
        return;
    }
    _hp -= damage;
    if (_hp <= 0) {
        _hp = 0;
        std::cout << "The dragon is out of combat !" << std::endl;
    } else
        std::cout << "The dragon winces in pain and takes " << damage << " damage." << std::endl;     
}

