/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Goblin
*/

#ifndef GOBLIN_HPP_
#define GOBLIN_HPP_

#include <IMob.hpp>

class Goblin : public IMob {
    public:
        Goblin();
        ~Goblin();

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
        std::string _race;
        int _power;
        int _hp;
        const int _maxPower;
        const int _maxHp;
    private:
        int _atkCost = 10;
        int _atkDmg = 20;
        int _skillCost[4] = {20, 30, 45, 70};
        int _skillDmg[4] = {30, 50, 80, 120};
        std::string _skillNames[4] = {"Knight Punch", "Dragon Breath", "Fury Slash", "Beheading"};
};

#endif /* !GOBLIN_HPP_ */