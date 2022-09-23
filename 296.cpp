#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n][n];


        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }

        int max_trace = -10e5;

        for(int i = 0; i < n; i++){
            int r = i, c = 0;
            int sum1 = 0, sum2 = 0;
            while(r < n && c < n){
                sum1 += a[r][c];
                sum2 += a[c][r];
                c++;
                r++;
            }
            max_trace = max(max_trace, max(sum1, sum2));
        }

        cout << max_trace << endl;

    }

    return 0;
}
