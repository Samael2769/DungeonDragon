/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Goblin
*/

#include "Goblin.hpp"

using namespace std;

Goblin::Goblin() : _hp(100), _power(20), _maxHp(200), _maxPower(100), _race("Goblin")
{
    std::cout << "Goblin" << std::endl;
}

Goblin::~Goblin()
{
    std::cout << "-Goblin" << std::endl;
}

int Goblin::attack()
{
    int cost = 40;
    int dmg = 30;

    if (_hp <= 0) {
        cout << "The goblin is out of combat !" << endl;
        return 0;
    }
    if (_power < cost) {
        cout << "The goblin is out of power !" << endl;
        return 0;
    }
    _power -= cost;
    cout << "The goblin swipes its sharp claw at you !" << endl;
    return dmg;
}

int Goblin::skill1()
{
    return 0;
}

int Goblin::skill2()
{
    int cost = 130;
    int dmg = 90;

    if (_hp <= 0) {
        cout << "The goblin is out of combat !" << endl;
        return 0;
    }
    if (_power < cost) {
        cout << "The goblin is out of power !" << endl;
        return 0;
    }
    _power -= cost;
    cout << "You feel the stickiness on your face as the goblin breathes out a barrage of spit !!!" << endl;
    return dmg;
}

int Goblin::skill3()
{
    return 0;
}

int Goblin::skill4()
{
    return 0;
}

void Goblin::rest()
{
    if (_hp <= 0) {
        cout << "The goblin is out of combat !" << endl;
        return;
    }
    cout << "The goblin stares at you menacingly but stays immobile." << endl;
    _power += 60;
    if (_power > _maxPower)
        _power = _maxPower;
}

void Goblin::damage(int damage)
{
    if (_hp <= 0) {
        cout << "The goblin is out of combat !" << endl;
        return;
    }
    _hp -= damage;
    if (_hp <= 0) {
        _hp = 0;
        cout << "The goblin is out of combat !" << endl;
    } else
        cout << "The goblin winces in pain and takes " << damage << " damage." << endl;     
}
