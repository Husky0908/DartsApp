void menu(int *points, int *players, int *darts_out) {
    
    do {
        std::cout << "301 or 501" << std::endl;
        std::cin >> *points;
    } while (!(*points==301) && !(*points==501));

    do {
        std::cout << "How many players? (2-4): ";
        std::cin >> *players;
    } while (*players<2 || *players>4);

    do {
        std::cout << "Simple/Double out? (0, 1) " << std::endl;
        std::cin >> *darts_out;
    } while (!(*darts_out==0) && !(*darts_out==1));
}
