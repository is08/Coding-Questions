#include<iostream>
using namespace std;

int main(){
    int t, x;
    cin >> t;

    while(t--){
        cin >> x;
        string s;
        cin >> s;

        int gamesWonByChef = 0, gamesWonByCarlsen = 0, draws = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'C'){
                gamesWonByCarlsen++;
            }
            else if(s[i] == 'N'){
                gamesWonByChef++;
            }
            else{
                draws++;
            }
        }

        int chefsScore = 0, carlsensScore = 0;

        chefsScore = (gamesWonByChef*2) + (draws*1);
        carlsensScore = (gamesWonByCarlsen*2) + (draws*1);

        if(chefsScore == carlsensScore){
            cout << (55 * x) << endl;
        }
        else if(carlsensScore > chefsScore){
            cout << (60 * x) << endl;
        }
        else{
            cout << (40 * x) << endl;
        }
    }

    return 0;
}
