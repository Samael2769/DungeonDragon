/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** IPotion
*/

#ifndef IPOTION_HPP_
#define IPOTION_HPP_

#include <iostream>

class IPotion {
    public:
        virtual ~IPotion() = default;
        virtual int getValue() const = 0;
        virtual int getType() const = 0;
    protected:
    private:
};

#endif /* !IPOTION_HPP_ */
