#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int g = a[0];

        for(int i = 1; i < n; i++){
            g = gcd(g, a[i]);
        }

        //cout << "gcd is " << g;

        if(g == 1){
            cout << "0" << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }
    return 0;
}
