#include <iostream>
#include <cstdlib>
#include "menu.h"
#include "game.h"

int main() {

    int points, players=2;

    system("clear");
    //std::cout << "\033[2J\033[1;1H";
    
    std::cout << "Darts App" << std::endl;

    menu(&points, &players);
    system("clear");
    // std::cout << "\033[2J\033[1;1H";
    game(points, players);

    return 0;
}
