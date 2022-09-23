#include<iostream>
using namespace std;

int main(){
    int t, d, x, y, z;
    cin >> t;

    while(t--){
        cin >> d >> x >> y >> z;

        cout << max(7*x, y*(d) + z*(7 - d)) << endl;
    }

    return 0;
}
