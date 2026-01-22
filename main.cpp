#include <iostream>
#include "menu.cpp"
#include "game.cpp"

int main() {
    int points, players=2, darts_out=1;
    
    std::cout << "Darts App" << std::endl;

    menu(&points, &players, &darts_out);
    game(points, players, darts_out);
    
    return 0;
}
