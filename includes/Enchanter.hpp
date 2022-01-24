/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Enchanter
*/

#ifndef ENCHANTER_HPP_
#define ENCHANTER_HPP_

#include "Peasant.hpp"

class Enchanter : virtual public Peasant {
    public:
        Enchanter(const std::string &name, int power) : Peasant(name, power)
        {
            std::cout << _name << " learns magic from his spellbook." << std::endl;
        }
        ~Enchanter();
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

#endif /* !ENCHANTER_HPP_ */
