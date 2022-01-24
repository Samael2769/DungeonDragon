/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** PowerPotion
*/

#ifndef POWERPOTION_HPP_
#define POWERPOTION_HPP_

#include "IPotion.hpp"

class PowerPotion : public IPotion {
    public:
        PowerPotion();
        ~PowerPotion();
        int getValue() const {return _pp;}
        int getType() const {return _type;}
    protected:
    int _pp;
    int _type = 1;
    private:
};

#endif /* !POWERPOTION_HPP_ */
