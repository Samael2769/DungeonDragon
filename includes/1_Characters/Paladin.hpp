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
        Paladin(std::string name, int power) : Peasant(name,power), Knight(name, power), Priest(name,power)
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
        int _atkCost = 20;
        int _atkDmg = 40;
        int _skillCost[4] = {40, 60, 80, 100};
        int _skillDmg[4] = {-65, 95, 140, 800};
        std::string _skillNames[4] = {"Holy Light", "Holy Slash", "Holy impale", "Holy Smite"};
};

#endif /* !PALADIN_HPP_ */
