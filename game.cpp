using namespace std;

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
    int test;
    int first=players;
    int good = true;

    // Valuation
        for (int i=0; i<=players-1; i++) {
            points[i] = point;
        }

    // posting scores
    scores_print(players, points, j);
    
    // game loop
        while(out==false){

            if(first%players==0){
            j=0;
            }

            int k=1;
            for(k; k<=3;k++){

            //    cout <<"j:"<< j<<endl;
            //    cout << "First:" << first <<endl;
                cout << "Points: "<< points[j] << endl;
                cout << "Player"<< j+1 << " scored" << k <<":";
                cin >> scored;
            //    system("clear");
                if (scored>60) good = false;
                if (scored<0) good = false;
                if (scored>20 && scored<=40) {if (!(scored%2==0)) good = false;}
                if (scored>20 && scored<60) {if (!(scored%3==0)) good = false;}
                if (scored==25 || scored==50) good = true;
                if (scored>20 && scored<=40) {if (scored%2==0) good = true;}
                if (scored>20 && scored<60) {if (scored%3==0) good = true;}
                if (good) {
                    points[j]=points[j]-scored;

                    if(points[j]==0){
                        out = true;
                        break;
                    }
                    if(points[j]<0){
                        points[j]=points[j]+scored;
                        cout << "Too mutch!" <<endl;
                    }

               //     cout <<endl<<"points[j]: "<< points[j] << endl;
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
        cout <<endl<< "The winner is: Player" << j<<endl;
}
