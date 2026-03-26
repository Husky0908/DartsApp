using namespace std;

struct Player {
    int score;
    int thr;
    float average;
    
    Player(int s) : score(s), thr(0), average(0) {}
};

void scores_print(int players, int points[players], int j) {
    for(j; j<=players-1;j++)
        cout << "Player"<<j+1<<": "<<points[j]<<endl;
    if(j>=(players-1)) {
        cout <<endl <<endl;
    }
}

void game(int point, int players) {

    // Declaration
    int points[players];
    int scored;
    bool out=false;
    int j=0;
    int first=players;
    bool good = true;
    Player test(point);

    // Valuation
        for (int i=0; i<=players-1; i++) {
            //points[i] = point;
            points[i] = test.score;
        }

    // posting scores
    scores_print(players, points, j);
    
    // game loop
        while(out==false){

            if(first%players==0){
            j=0;
            }

            for(int k=1; k<=3;k++){

                cout << "Points: "<< points[j] << endl;
                cout << "Player"<< j+1 << " scored" << k <<":";
                cin >> scored;

                if (scored>60) good = false;
                if (scored<0) good = false;
                if (scored>20 && scored<=40) {if (!(scored%2==0)) good = false;}
                if (scored>20 && scored<60) {if (!(scored%3==0)) good = false;}
                if (scored==25 || scored==50) good = true;
                if (scored>20 && scored<=40) {if (scored%2==0) good = true;}
                if (scored>20 && scored<60) {if (scored%3==0) good = true;}
                if (good) {
                    points[j] = points[j]-scored;

                    if(points[j]==0){
                        out = true;
                        break;
                    }
                    if(points[j]<0){
                        points[j]=points[j]+scored;
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
            scores_print(players, points, 0);
        }
    cout << "|----------------------|\n";
    cout << "|The winner is: Player" << j << "|\n";
    cout << "|----------------------|\n";
}
