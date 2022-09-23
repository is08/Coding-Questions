#include<iostream>
using namespace std;

int main(){
    int t, n, m, k;
    cin >> t;

    while(t--){
        cin >> n >> m >> k;

        if((m - k) >= n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
