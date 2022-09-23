#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int price[n];

        for(int i = 0; i < n; i++){
            cin >> price[i];
        }

        sort(price, price + n, greater<int>());

        double profit = 0;

        for(int i = 0; i < n; i++){
            profit = profit + price[i];

            for(int j = (i + 1); j < n; j++){
                if(price[j] > 0){
                    price[j] = price[j] - 1;
                }
            }
        }

        cout << fmod(profit, (10e9 + 7)) << endl;
    }

    return 0;
}
