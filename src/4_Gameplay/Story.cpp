/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Story
*/

#include "Story.hpp"

Story::Story()
{
}

Story::~Story()
{
}

void Story::startStory()
{
    std::string name;
    int type = 0;
    bool isDone = false;
    std::cout << "Welcome to the dungeon" << std::endl;
    std::cout << "What is your name ?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << " What class do you want to play ?" << std::endl;
    while (isDone == false) {
        std::cout << "1. Knight" << std::endl;
        std::cout << "2. Enchanter" << std::endl;
        std::cout << "3. Paladin" << std::endl;
        std::cout << "4. Priest" << std::endl;
        std::cout << "5. Peasant" << std::endl;
        std::cin >> type;
        if (type > 0 && type < 6)
            isDone = true;
        else
            std::cout << "Please enter a valid number" << std::endl;
    }
    switch (type) {
        case 1:
            _player = new Knight(name, 100);
            break;
        case 2:
            _player = new Enchanter(name, 100);
            break;
        case 3:
            _player = new Paladin(name, 100);
            break;
        case 4:
            _player = new Priest(name, 100);
            break;
        case 5:
            _player = new Peasant(name, 100);
            break;
    }
}

void Story::runStory()
{
    int type = random() % 5;
    int side = 0;
    int tours = 0;

    while (1) {
        type = random() % 6;
        if (type == 5 && tours < 5) {
            type = random() % 6;
            continue;
        }
        Rooms room(type, _player);
        room.run();
        if (type == 5 && tours > 5)
            break;
        tours++;
        std::cout << std::endl;
        std::cout << "Do you want to go: " << std::endl;
        std::cout << "1. Left" << std::endl;
        std::cout << "2. Right" << std::endl;
        std::cout << "3. Forward" << std::endl;
        std::cout << std::endl;
        std::cin >> side;
    }
}