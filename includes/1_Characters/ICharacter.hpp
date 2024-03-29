/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** ICharacter
*/

#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

#include <iostream>
#include "IPotion.hpp"
#include "PoisonPotion.hpp"
#include "PowerPotion.hpp"
#include "HealthPotion.hpp"

class ICharacter {
    public:
        virtual ~ICharacter() = default;
        virtual int attack() = 0;
        virtual int skill1() = 0;
        virtual int skill2() = 0;
        virtual int skill3() = 0;
        virtual int skill4() = 0;
        virtual void rest() = 0;
        virtual void damage(int damage) = 0;
        virtual std::string getName() const = 0;
        virtual int getPower() const = 0;
        virtual int getHp() const = 0;
        virtual const int getMaxPower() const = 0;
        virtual const int getMaxHp() const = 0;
        virtual void drink(const IPotion * potion) = 0;
        virtual void drink(const PoisonPotion &potion) = 0;
        virtual void drink(const HealthPotion &potion) = 0;
        virtual void drink(const PowerPotion &potion) = 0;
    protected:
    private:
};

#endif /* !ICHARACTER_HPP_ */
