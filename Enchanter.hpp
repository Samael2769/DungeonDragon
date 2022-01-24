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
        virtual int special();
        virtual void rest();
    protected:
    private:
};

#endif /* !ENCHANTER_HPP_ */
