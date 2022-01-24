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
        int special() final {return Priest::special();}
        void rest() final {Priest::rest();}
    protected:
    private:
};

#endif /* !PALADIN_HPP_ */
