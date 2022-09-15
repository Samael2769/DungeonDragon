/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Dragon
*/

#include "Dragon.hpp"

using namespace std;

Dragon::Dragon() : _hp(500), _power(250), _maxHp(500), _maxPower(250), _race("Dragon")
{
    cout << "The dragon sleeps in his cavern, protecting his treasures from greedy adventurers..." << endl;
}

Dragon::~Dragon()
{
    cout << "Bored of this land, the dragon gobbles up its treasures and flies away." << endl;
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
    cout << "The dragon swipes its sharp claw at you !" << endl;
    return dmg;
}

int Dragon::skill1()
{
    return 0;
}

int Dragon::skill2()
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
    cout << "You feel the heat on your face as the dragon breathes out a barrage of flames !!!" << endl;
    return dmg;
}

int Dragon::skill3()
{
    return 0;
}

int Dragon::skill4()
{
    return 0;
}

void Dragon::rest()
{
    if (_hp <= 0) {
        cout << "The dragon is out of combat !" << endl;
        return;
    }
    cout << "The dragon stares at you menacingly but stays immobile." << endl;
    _power += 60;
    if (_power > _maxPower)
        _power = _maxPower;
}

void Dragon::damage(int damage)
{
    if (_hp <= 0) {
        cout << "The dragon is out of combat !" << endl;
        return;
    }
    _hp -= damage;
    if (_hp <= 0) {
        _hp = 0;
        cout << "The dragon is out of combat !" << endl;
    } else
        cout << "The dragon winces in pain and takes " << damage << " damage." << endl;     
}

