/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** PoisonPotion
*/

#ifndef POISONPOTION_HPP_
#define POISONPOTION_HPP_

#include "IPotion.hpp"

class PoisonPotion : public IPotion {
    public:
        PoisonPotion();
        ~PoisonPotion();
        int getValue() const {return _hp;}
        int getType() const {return _type;}
    protected:
    int _hp;
    int _type = 0;
    private:
};

#endif /* !POISONPOTION_HPP_ */
