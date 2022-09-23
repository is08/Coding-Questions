#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int times= 0;
        sort(a.begin(), a.end());

        for(int i = 1; i < n; i++){
            if(a[i] >= a[i-1]){
                times++;
            }
        }

        if(times == n){
            cout << 2 << '\n';
        }
        else{
            cout << times << '\n';
        }
    }

    return 0;
}
