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
        int _skillCost[4] = {20, 50, 60, 100};
        int _skillDmg[4] = {-30, -100, 80, 400};
        std::string _skillNames[4] = {"Light Heal", "Blessing", "Holy Water Throw", "Smite"};
};

#endif /* !PRIEST_HPP_ */
