/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** HealthPotion
*/

#ifndef HEALTHPOTION_HPP_
#define HEALTHPOTION_HPP_

#include "IPotion.hpp"

class HealthPotion : public IPotion{
    public:
        HealthPotion() : _hp(50), _type(2)
        {}
        ~HealthPotion();
        int getValue() const {return _hp;}
        int getType() const {return _type;}
    protected:
    int _hp;
    int _type = 3;
    private:
};

#endif /* !HEALTHPOTION_HPP_ */
