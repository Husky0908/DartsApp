#include <iostream>

void menu(int *points, int *players) {
    
    do {
        std::cout << "301 or 501" << std::endl;
        std::cin >> *points;
    } while (!(*points==301) && !(*points==501));

    do {
        std::cout << "How many players? (2-4): ";
        std::cin >> *players;
    } while (*players<2 || *players>4);
}
