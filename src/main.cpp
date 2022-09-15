/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "IPotion.hpp"
#include "HealthPotion.hpp"
#include "PoisonPotion.hpp"
#include "PoisonPotion.hpp"

#include "Story.hpp"

int main()
{
    srandom(time(NULL));
    Story story;
    story.startStory();
    story.runStory();
    return 0;
}