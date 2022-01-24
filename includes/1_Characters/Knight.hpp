/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Knight
*/

#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_

#include "Peasant.hpp"

class Knight : virtual public Peasant {
    public:
        Knight(const std::string &name, int power) : Peasant(name,power){
            _hp = 100;
            std::cout << _name << " vows to protect the kingdom." << std::endl;
        }
        ~Knight();

        virtual int attack();
        int skill1();
        int skill2();
        int skill3();
        int skill4();
        virtual void rest();
    protected:
    private:
        int _atkCost = 10;
        int _atkDmg = 20;
        int _skillCost[4] = {20, 30, 45, 70};
        int _skillDmg[4] = {30, 50, 80, 120};
        std::string _skillNames[4] = {"Knight Punch", "Impale", "Fury Slash", "Beheading"};
};

#endif /* !KNIGHT_HPP_ */
