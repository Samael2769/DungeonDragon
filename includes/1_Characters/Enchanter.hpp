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
        Enchanter(std::string name, int power) : Peasant(name, power)
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
        int _atkCost = 1;
        int _atkDmg = 8;
        int _skillCost[4] = {15, 30, 45, 50};
        int _skillDmg[4] = {30, 60, 90, 0};
        std::string _skillNames[4] = {"Fireball", "Ice Shard", "Sparkling Flash", "Blood Pact"};
};

#endif /* !ENCHANTER_HPP_ */
