#include <iostream>
#include "menu.cpp"
#include "game.cpp"

int main() {
    int points=2, players=0, darts_out=5;
    
    std::cout << "Darts App" << std::endl;

    menu(&points, &players, &darts_out);
    game(points, players, darts_out);
    
    return 0;
}
