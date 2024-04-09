#include <iostream>
#include <vector>
#include "Horse.h"
#include "Pegasus.h"
#include "Human.h"
#include "Centaur.h"
#include "MagicCreature.h"


int main()
{
    ////Задание №2
    //Pegasus pegasus;
    //Horse* horse = &pegasus;
    //std::cout << "Class Name: ";
    //std::cout << pegasus.className() << std::endl;

    //Horse* horse = new Pegasus();
    //std::cout << "Class Name: ";
    //std::cout << horse->className() << std::endl;
    //delete horse;


   /* Pegasus pegasus;
    std::cout << "Class Name: " << pegasus.className() << std::endl;*/

    //Human human;
    //Centaur centaur;

    ////Задание №4,5
    //Human* human = new Centaur();
    //std::cout << "Class Name: ";
    //std::cout << human->className() << std::endl;
    //delete human;

    ////Задание №6
    //MagicCreature* mc = new Centaur();
    //std::cout << "Class Name: ";
    //std::cout << (dynamic_cast<Centaur*>(mc))->className() << std::endl;
    //delete mc;

    //Задание №7
    Horse** horses = new Horse * [3];
    horses[0] = new Horse();
    horses[1] = new Pegasus();
    horses[2] = new Centaur();
    std::cout << "\nArray:\n";
    for (int i = 0; i < 3; i++)
        std::cout << horses[i]->className() << std::endl;
    for (int i = 0; i < 3; i++)
        delete[] horses[i];
    delete[] horses;
}
