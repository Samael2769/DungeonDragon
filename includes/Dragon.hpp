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

    protected:
        int _hp;
        int _power;
    private:
};

#endif /* !DRAGON_HPP_ */
