#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n, m;
    cin >> test;

    while(test--){
        cin >> n >> m;
        int f[n], p[n];
        int cost[m + 1] = {0};

        for(int i = 0; i < n; i++){
            cin >> f[i];
        }

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        for(int i = 0; i < n; i++){
            cost[f[i]] = cost[f[i]] + p[i];
        }

        int mini = 10e5;

        for(int i = 0; i < m + 1; i++){
            if(cost[i] > 0){
                mini = min(mini, cost[i]);
            }
        }

        cout << mini;
    }

    return 0;
}
