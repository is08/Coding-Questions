#include<iostream>
#include<algorithm>>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int a[n], gcd;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        gcd = __gcd(a[0], a[1]);

        for(int i = 2; i < n; i++){
            gcd = __gcd(gcd, a[i]);
        }

        cout << gcd << endl;
    }

    return 0;
}
