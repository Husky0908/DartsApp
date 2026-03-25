#include <iostream>
#include <cstdlib>
#include "menu.cpp"
#include "game.cpp"

int main() {

    int points, players=2;

    system("clear");
    std::cout << "Darts App" << std::endl;

    menu(&points, &players);
    system("clear");
    game(points, players);

    return 0;
}
