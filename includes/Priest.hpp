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
        virtual void rest();
    protected:
    private:
};

#endif /* !PRIEST_HPP_ */
