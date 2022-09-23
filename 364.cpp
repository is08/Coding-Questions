#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int numberOfMatches = 5, winner, winsOfIndia = 0, winsOfEngland = 0;

        while(numberOfMatches--){
            cin >> winner;

            if(winner == 1){
                winsOfIndia++;
            }
            if(winner == 2){
                winsOfEngland++;
            }
        }

        if(winsOfEngland > winsOfIndia){
            cout << "ENGLAND" << endl;
        }
        else if(winsOfIndia > winsOfEngland){
            cout << "INDIA" << endl;
        }
        else{
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
