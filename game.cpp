using namespace std;
void game(int point, int players, int darts_out) {

    // Declaration
        int points[players];
        int scored;
        bool out=false;
        int j=0;
        int test;
        bool first=true;

    // Valuation
        for (int i=0; i<=players-1; i++) {
            points[i] = point;
        }

    // posting scores
        for(j; j<=players-1;j++)
        cout << "Player"<<j+1<<": "<<points[j]<<endl;
            if(j>=(players-1)) {
                cout <<endl <<endl;
            }
    // game loop
        while(out==false){

            if(first!=false){
            j=0;
            }

            for(int k=1; k<=3;k++){
                cout <<"j:"<< j<<endl;
                cout << "First:" << first <<endl;
                first == false;
                cout << "Player"<< j+1 << " scored" << k <<":";
                cin >> scored;
                points[j]=points[j]-scored;

                if(points[j]==0){
                    out = true;
                    break;
                    }

                if(points[j]<0){
                    points[j]=points[j]+scored;
                    cout << "Too mutch!" <<endl;
                    }

                cout <<"points[j]: "<< points[j] << endl;
                }
            cout << "The vinner is: Player" << j+1;
            j=j+1;
        }
}
