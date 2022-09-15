/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Rooms
*/

#ifndef ROOMS_HPP_
#define ROOMS_HPP_

#include <iostream>
#include <map>

#include "combat.hpp"
#include "IMob.hpp"
#include "ICharacter.hpp"

class Rooms {
    public:
        Rooms(int type, ICharacter * player);
        ~Rooms();
        void Nothing();
        void Monster();
        void Boss();
        void Treasure();
        void Trap();
        void Exit();
        void run();
        std::map<int, void (Rooms::*)()> _rooms;
    protected:
    private:
        int type;
        ICharacter * _player;
};

#endif /* !ROOMS_HPP_ */
