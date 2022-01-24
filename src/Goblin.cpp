/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Goblin
*/

#include "Goblin.hpp"

Goblin::Goblin() : _hp(100), _power(20), _maxHp(200), _maxPower(100), _race("Goblin")
{
    std::cout << "Goblin" << std::endl;
}

Goblin::~Goblin()
{
    std::cout << "-Goblin" << std::endl;
}
