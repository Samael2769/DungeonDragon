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
        const int getMaxPower() const{return _maxPower;}
        const int getMaxHp() const {return _maxHp;}
        std::string getName() const {return _race;}
        
        int attack();
        int skill1();
        int skill2();
        int skill3();
        int skill4();
        void rest();
        void damage(int damage);
    protected:
        int _hp;
        int _power;
        const int _maxHp;
        const int _maxPower;
        std::string _race;
    private:
        int _atkCost = 10;
        int _atkDmg = 20;
        int _skillCost[4] = {20, 30, 45, 70};
        int _skillDmg[4] = {30, 50, 80, 120};
        std::string _skillNames[4] = {"Knight Punch", "Dragon Breath", "Fury Slash", "Beheading"};
};

#endif /* !DRAGON_HPP_ */
