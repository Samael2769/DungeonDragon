/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Story
*/

#ifndef STORY_HPP_
#define STORY_HPP_

#include "ICharacter.hpp"
#include "Rooms.hpp"
#include "Enchanter.hpp"
#include "Knight.hpp"
#include "Priest.hpp"
#include "Peasant.hpp"
#include "Paladin.hpp"

#include <iostream>

class Story {
    public:
        Story();
        ~Story();
        void startStory();
        void runStory();
    protected:
    private:
        ICharacter *_player;
};

#endif /* !STORY_HPP_ */
