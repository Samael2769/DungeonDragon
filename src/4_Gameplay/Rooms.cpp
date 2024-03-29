/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Rooms
*/

#include "Rooms.hpp"
#include "Goblin.hpp"
#include "Dragon.hpp"
#include "IPotion.hpp"
#include "PoisonPotion.hpp"
#include "HealthPotion.hpp"
#include "PowerPotion.hpp"

Rooms::Rooms(int type, ICharacter * player)
{
    this->type = type;
    _player = player;
    _rooms[0] = &Rooms::Nothing;
    _rooms[1] = &Rooms::Monster;
    _rooms[2] = &Rooms::Boss;
    _rooms[3] = &Rooms::Treasure;
    _rooms[4] = &Rooms::Trap;
    _rooms[5] = &Rooms::Exit;
}

Rooms::~Rooms()
{
}

void Rooms::Nothing()
{
    std::cout << "Nothing" << std::endl;
}

void Rooms::Monster()
{
    std::cout << "Monster" << std::endl;
    IMob *mob = new Goblin();
    if (combat(_player, mob) == false)
        exit(0);
    delete mob;
}

void Rooms::Boss()
{
    std::cout << "Boss" << std::endl;
    IMob *mob = new Dragon();
    if (combat(_player, mob) == false)
        exit(0);
    delete mob;
}

void Rooms::Treasure()
{
    IPotion *potion;
    int type = random() % 3;
    switch (type) {
        case 0:
            potion = new HealthPotion();
            break;
        case 1:
            potion = new PowerPotion();
            break;
        case 2:
            potion = new PoisonPotion();
            break;
    }
    _player->drink(potion);
    std::cout << "Treasure" << std::endl;
}

void Rooms::Trap()
{
    std::cout << "Trap" << std::endl;
    _player->damage(10);
}

void Rooms::Exit()
{
    std::cout << "Exit" << std::endl;
    exit(0);
}

void Rooms::run()
{
    (this->*_rooms[type])();
}