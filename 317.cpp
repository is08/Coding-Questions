#include<iostream>
using namespace std;

int main(){
    int t, l, r, k;
    cin >> t;

    while(t--){
        cin >> l >> r >> k;

        if(l == r){
            cout << 1 << endl;
        }
        else{
            cout << k << endl;
        }
    }

    return 0;
}
