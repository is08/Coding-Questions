#include<iostream>
using namespace std;

int main(){
    int t, H, x, y, C;
    cin >> t;

    while(t--){
        cin >> H >> x >> y >> C;

        int total_req = H * (x + (y / 2));

        if(total_req <= C){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
