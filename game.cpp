#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Player {
    string name;
    int score;
    int thr;
    float average;

    Player(int id, int score) : score(score), thr(0), average(0) {
        name = "Player" + std::to_string(id);
    }
};

void scores_print(int players, int points[], int j) {
    // for(deklaracio [opcionalis]; feltetel [opcionalis]; ciklusmuvelet [opcionalis]) {}
    for(; j<=players-1;j++)
        cout << "Player"<<j+1<<": "<<points[j]<<endl;
    if(j>=(players-1)) {
        cout <<endl <<endl;
    }
}

void score_print_2(const vector<Player> &players) {
    for (const auto& player : players) {
        cout << player.name << ": " << player.score << endl;
    }
    cout << endl << endl;
}

void game(int point, int nm_players) {

    // Declaration
    int scored;
    bool out=false;
    int j=0;
    int first=nm_players;
    bool good = true;
    vector<Player> players;

    // Valuation
    for (int i=0; i<=nm_players-1; i++) {
        // points[i] = test.score;
        players.push_back(Player(i+1,point));
    }

    // posting scores
    score_print_2(players);
    
    // game loop
    while(out==false){

        if(first%nm_players==0){
            j=0;
        }
        Player& player = players[j];
        for(int k=1; k<=3;k++){

            cout << "Points: "<< player.score << endl;
            cout << player.name << " scored" << k <<":";
            cin >> scored;

            if (scored>60) good = false;
            if (scored<0) good = false;
            if (scored>20 && scored<=40) {if (!(scored%2==0)) good = false;}
            if (scored>20 && scored<60) {if (!(scored%3==0)) good = false;}
            if (scored==25 || scored==50) good = true;
            if (scored>20 && scored<=40) {if (scored%2==0) good = true;}
            if (scored>20 && scored<60) {if (scored%3==0) good = true;}
            if (good) {
                player.score = player.score-scored;

                if(player.score==0){
                    out = true;
                    break;
                }
                if(player.score<0){
                    player.score = player.score+scored;
                    cout << "Too mutch!" <<endl;
                }

            } else {
                cout << "Incorrect score!" << endl;
                k--;
                good = true;
            }
        }
        j++;
        first++;
        system("clear");
        score_print_2(players);
    }
    cout << "|----------------------|\n";
    cout << "|The winner is: Player" << j << "|\n";
    cout << "|----------------------|\n";
}
