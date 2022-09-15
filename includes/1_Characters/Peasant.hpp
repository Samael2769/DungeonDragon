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
        Peasant(std::string name, int power) : _power(power),  _hp(100), _maxPower(power), _maxHp(100), _name(name)
        {
            std::cout << _name << " goes for an adventure." << std::endl;
            if (_power > 100)
                _power = 100;
        }
        ~Peasant();
        std::string getName() const {return _name;}
        int getPower() const{return _power;}
        int getHp() const {return _hp;}
        const int getMaxPower() const{return _maxPower;}
        const int getMaxHp() const {return _maxHp;}
        
        virtual int attack();
        int skill1();
        int skill2();
        int skill3();
        int skill4();
        virtual void rest();
        void damage(int damage);
        void drink(const IPotion * potion);
        void drink(const PoisonPotion &potion);
        void drink(const HealthPotion &potion);
        void drink(const PowerPotion &potion);
    protected:
    int _power;
    int _hp;
    const int _maxPower;
    const int _maxHp;
    std::string _name;
    private:
        int _atkCost = 1;
        int _atkDmg = 5;
        int _skillCost[4] = {1, 15, 35, 100};
        int _skillDmg[4] = {0, 15, 40, 90};
        std::string _skillNames[4] = {"Think", "Reckless Punch", "Fork Jab", "Cow Attack"};
};

#endif /* !PEASANT_HPP_ */
