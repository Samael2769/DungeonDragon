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
        int _atk_cost = 10;
        int _atk_dmg = 20;
        int _special_costs[4] = {20, 30, 45, 70};
        int _special_dmgs[4] = {0, 50, 0, 0};
};

#endif /* !KNIGHT_HPP_ */
