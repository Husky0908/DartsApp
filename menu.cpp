void menu(int *points, int *players, int *darts_out) {
    
    while (*points!=0 && *points!=1) {
        std::cout << "301 or 501 (0, 1)" << std::endl;
        std::cin >> *points;
    }

    while (*players<1 || *players>4) {
        std::cout << "How many players? (2-4): ";
        std::cin >> *players;
    }

    while (*darts_out!=0 && *darts_out!=1) {
        std::cout << "Simple/Double out? (0, 1) " << std::endl;
        std::cin >> *darts_out;
    }
}
