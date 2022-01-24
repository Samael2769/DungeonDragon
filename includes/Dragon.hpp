/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Dragon
*/

#ifndef DRAGON_HPP_
#define DRAGON_HPP_

#include "IMob.hpp"

class Dragon : public IMob {
    public:
        Dragon();
        ~Dragon();

        int getPower() const {return _power;}
        int getHp() const {return _hp;}
        
        int attack();
        int special();
        void rest();
        void damage(int damage);
    protected:
        int _hp;
        int _power;
        const int _maxHp;
        const int _maxPower;
        const std::string _race = "Dragon";
    private:
};

#endif /* !DRAGON_HPP_ */
