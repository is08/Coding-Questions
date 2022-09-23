#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;

        if(n / k == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
