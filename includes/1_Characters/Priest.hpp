/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Enchanter.hpp"

class Priest : public Enchanter{
    public:
        Priest(const std::string &name, int power) : Peasant(name,power), Enchanter(name, power)
        {
            std::cout << _name << " enters in the order." << std::endl;
        }
        ~Priest()
        {
            std::cout << _name << " finds peace." << std::endl;
        }
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

#endif /* !PRIEST_HPP_ */
