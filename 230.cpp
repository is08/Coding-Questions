#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test, n, a, b;
    cin >> test;

    while(test--){
        cin >> n >> a >> b;
        int x;
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }

        double ans = (mp[a] * mp[b] * 1.0) / (n * n);

        cout << fixed << setprecision(10) << ans << endl;

    }

    return 0;
}
