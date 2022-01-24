/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Knight.hpp"
#include "Priest.hpp"

class Paladin : public Knight, public Priest{
    public:
        Paladin(const std::string &name, int power) : Peasant(name,power), Knight(name, power), Priest(name,power)
        {
            std::cout << _name << " fights for the light." << std::endl;
        }
        ~Paladin();
        int attack() final {return Knight::attack();}
        int skill1();
        int skill2();
        int skill3();
        int skill4();
        void rest() final {Priest::rest();}
    protected:
    private:
        int _atkCost = 10;
        int _atkDmg = 20;
        int _skillCost[4] = {20, 30, 45, 70};
        int _skillDmg[4] = {30, 50, 80, 120};
        std::string _skillNames[4] = {"Knight Punch", "Impale", "Fury Slash", "Beheading"};
};

#endif /* !PALADIN_HPP_ */
