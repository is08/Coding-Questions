#include<iostream>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;

        int maximum = -999999, minimum = 999999;

        int pos;

        while(m--){
            cin >> pos;

            maximum = max(pos, maximum);
            minimum = min(pos, minimum);
        }

        for(int i = 0; i < n; i++){
            cout << max(abs(maximum - i), abs(minimum - i)) << " ";
        }

        cout << endl;
    }

    return 0;
}
