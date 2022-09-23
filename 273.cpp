#include<iostream>
using namespace std;

int main(){
    int t, k;
    cin >> t;


    while(t--){
        cin >> k;
        char chess_board[8][8]{'.'};
        chess_board[0][0] = 'O';
        k--;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(i == 0 && j == 0){
                    continue;
                }
                else{
                    if(k == 0){
                        chess_board[i][j] = 'X';
                    }
                    else{
                        chess_board[i][j] = '.';
                        k--;
                    }
                }
            }
        }

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cout << chess_board[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}
