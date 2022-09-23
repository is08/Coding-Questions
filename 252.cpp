#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int t, x, y;
    cin >> t;

    while(t--){
        cin >> x >> y;

        if(gcd(x, y) > 1){
            cout << "0" << endl;
        }
        else if((gcd(x + 1, y) > 1) || gcd(x, y + 1) > 1){
            cout << "1" << endl;
        }
        else{
            cout << "2" << endl;
        }
    }

    return 0;
}
