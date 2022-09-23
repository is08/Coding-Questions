#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int a[m];
        int freq[n] = {0};

        for(int i = 0; i < m; i++){
            cin >> a[i];
            freq[a[i] - 1]++;
        }

        sort(freq, freq + n);

        if(freq[n - 1] - freq[0] >= 2){
            cout << "NO" << endl;
        }
        else if(freq[n - 1] - freq[0] < 2){
            cout << "YES" << endl;
        }
    }

    return 0;
}
