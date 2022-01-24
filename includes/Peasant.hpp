/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Peasant
*/

#ifndef PEASANT_HPP_
#define PEASANT_HPP_

#include <iostream>
#include "ICharacter.hpp"

class Peasant : public ICharacter {
    public:
        Peasant(const std::string &name, int power) : _power(power),  _hp(100), _name(name)
        {
            std::cout << _name << " goes for an adventure." << std::endl;
            if (_power > 100)
                _power = 100;
        }
        ~Peasant();
        const std::string &getName() const {return _name;}
        int getPower() const{return _power;}
        int getHp() const {return _hp;}
        
        virtual int attack();
        int skill1();
        int skill2();
        int skill3();
        int skill4();
        virtual void rest();
        void damage(int damage);
        void drink(const IPotion &potion);
        void drink(const PoisonPotion &potion);
        void drink(const HealthPotion &potion);
        void drink(const PowerPotion &potion);
    protected:
    int _power;
    int _hp;
    const std::string &_name;
    private:
        int _atkCost = 10;
        int _atkDmg = 20;
        int _skillCost[4] = {20, 30, 45, 70};
        int _skillDmg[4] = {30, 50, 80, 120};
        std::string _skillNames[4] = {"Knight Punch", "Impale", "Fury Slash", "Beheading"};
};

#endif /* !PEASANT_HPP_ */
