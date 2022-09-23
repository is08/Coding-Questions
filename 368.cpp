#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int d, x;

        if(n % k == 0){
            d = n/k;
            x = k;
        }
        else{
            d = (n/k) + 1;
            x = n%k;
        }

        cout << d << " " << x << endl;
    }

    return 0;
}
