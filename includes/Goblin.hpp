/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Goblin
*/

#ifndef GOBLIN_HPP_
#define GOBLIN_HPP_

#include <IMob.hpp>

class Goblin : public IMob {
    public:
        Goblin();
        ~Goblin();

    protected:
    private:
    const std::string _race;
    int _power;
    int _hp;
    const int _maxPower;
    const int _maxHp;
};

#endif /* !GOBLIN_HPP_ */