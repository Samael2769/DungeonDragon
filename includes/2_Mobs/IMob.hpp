/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** IMob
*/

#ifndef IMOB_HPP_
#define IMOB_HPP_

#include <iostream>

class IMob {
    public:
        virtual ~IMob() = default;
        virtual int attack() = 0;
        virtual int skill1() = 0;
        virtual int skill2() = 0;
        virtual int skill3() = 0;
        virtual int skill4() = 0;
        virtual void damage(int damage) = 0;
        virtual int getPower() const = 0;
        virtual int getHp() const = 0;
        virtual std::string getName() const = 0;
        virtual const int getMaxPower() const = 0;
        virtual const int getMaxHp() const = 0;
        virtual void rest() = 0;
    protected:
    private:
};

#endif /* !IMOB_HPP_ */
