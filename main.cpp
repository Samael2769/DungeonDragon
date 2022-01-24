/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "Knight.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"
#include "ICharacter.hpp"
#include "IPotion.hpp"
#include "HealthPotion.hpp"
#include "PoisonPotion.hpp"
#include "PoisonPotion.hpp"

int main()
{
    ICharacter * peasant = new Peasant (" Gildas ", 42) ;
    PoisonPotion poison_potion ;
    HealthPotion health_potion ;
    IPotion & potion = health_potion ;
    std :: cout << peasant->getName () << ": " << peasant -> getHp () << "HP , "
    << peasant -> getPower () << " PP." << std :: endl ;
    peasant -> drink ( poison_potion ) ;
    std :: cout << peasant->getName () << ": " << peasant -> getHp () << "HP , "
    << peasant -> getPower () << " PP." << std :: endl ;
    peasant -> drink ( potion ) ;
    std :: cout << peasant->getName () << ": " << peasant -> getHp () << "HP , "
    << peasant -> getPower () << " PP." << std :: endl ;
    delete peasant ;
}