#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int coins[3] = {0 , 0, 0};
        int flag = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 5){
                coins[0]++;
            }
            else if(a[i] == 10){
                coins[1]++;
            }
            else if(a[i] == 15){
                coins[2]++;
            }

            cout << coins[0] << " " << coins[1] << " " << coins[2] << endl;

            int change = a[i] - 5;

            if(change == 5){
                if(coins[0] > 0){
                    coins[0]--;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(change == 10){
                if(coins[1] > 0){
                    coins[1]--;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(change == 15){
                if(coins[2] > 0){
                    coins[2]--;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(change == 0){

            }
            else{
                flag == 1;
                break;
            }

        }

            if(flag == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
    }

    return 0;
}
