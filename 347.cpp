#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string teamName;
        int score;
        int goalsByBarcelona, goalsByRealMadrid, goalsByMalaga, goalsByEibar;

        for(int i = 0; i < 4; i++){
            cin >> teamName;
            cin >> score;

            if(teamName == "Barcelona"){
                goalsByBarcelona = score;
            }
            if(teamName == "RealMadrid"){
                goalsByRealMadrid = score;
            }
            if(teamName == "Malaga"){
                goalsByMalaga = score;
            }
            if(teamName == "Eibar"){
                goalsByEibar = score;
            }
        }

        if((goalsByRealMadrid < goalsByMalaga) && (goalsByBarcelona > goalsByEilbar)){
            cout << "Barcelona" << endl;
        }
        else{
            cout << "RealMadrid" << endl;
        }
    }
    return 0;
}
