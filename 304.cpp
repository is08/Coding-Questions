#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;

        while(n - k >= 0){
            n = n - k;
            //cout << "updated n is " << n << endl;
        }
        cout << n << endl;
    }

    return 0;
}
