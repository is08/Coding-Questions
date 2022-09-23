#include<iostream>
using namespace std;

int main(){
    int t,a, b, c, d, K;
    cin >> t;

    while(t--){
        cin >> a >> b >> c >> d >> K;

        int distance = abs(c - a) + abs(d - b);

        if(distance <= K && (K - distance) % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
