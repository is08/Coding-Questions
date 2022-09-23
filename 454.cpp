#include<iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){

        int scoreA = 0, scoreB = 0, turn_a = 0, turn_b = 0, tie = 1;
        bool turnA = true;

        for(int i = 0; i < s.size(); i++){
            //cout << "scoreA " << scoreA << " and scoreB " << scoreB << "\n";
            if(turnA){
                turn_a++;
                turnA = false;
                if(s[i] == '1'){
                    scoreA++;
                }

                if(i < 10){
                    if(scoreB + 5 - turn_b < scoreA){
                        tie = 0;
                        cout<<"TEAM-A "<<(i+1)<<endl;
                        break;
                    }
                    else if(scoreA + 5 - turn_a < scoreB){
                        tie = 0;
                        cout<<"TEAM-B "<<(i+1)<<endl;
                        break;
                    }
                }
            }
            else if(!turnA){
                turn_b++;
                turnA = true;

                if(s[i] == '1'){
                    scoreB++;
                }

                if(i < 10){
                    if(scoreB + 5 - turn_b < scoreA){
                        tie = 0;
                        cout<<"TEAM-A "<<(i+1)<<endl;
                        break;
                    }
                    else if(scoreA + 5 - turn_a < scoreB){
                        tie = 0;
                        cout<<"TEAM-B "<<(i+1)<<endl;
                        break;
                    }
                }

                else{
                    if(scoreA > scoreB){
                        tie = 0;
                        cout<<"TEAM-A "<<(i+1)<<endl;
                        break;
                    }
                    else if(scoreB > scoreA){
                        tie = 0;
                        cout<<"TEAM-B "<<(i+1)<<endl;
                        break;
                    }

                }
            }
        }
        if(tie == 1){
            cout << "TIE\n";
        }
    }
    return 0;
}
