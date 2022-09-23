#include<iostream>
using namespace std;

int main(){
    int t, n, a, b;
    cin >> t;

    while(t--){
        cin >> n >> a >> b;

        int tt = 2 * (180 + n);
        int time_left = a + b;

        cout << tt - time_left << endl;
    }

    return 0;
}
