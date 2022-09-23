#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int s, p, v, maxi = -10e5;

        for(int i = 0; i < n; i++){
            cin >> s >> p >> v;

            int profit = (p / (s + 1)) * v;

            if(profit > maxi){
                maxi = profit;
            }
        }

        cout << maxi << endl;

    }
    return 0;
}
