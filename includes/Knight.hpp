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
        virtual int special();
        virtual void rest();
    protected:
    private:
};

#endif /* !KNIGHT_HPP_ */
