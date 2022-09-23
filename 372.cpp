#include<iostream>
using namespace std;

bool getEvenOddParity(int n){
    int rem, sum = 0;

    while(n){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    return sum % 2;
}

int main(){
    long long int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        bool parity = getEvenOddParity(n);
        n++;

        while(1){
            if(getEvenOddParity(n) != parity){
                cout << n << endl;
                break;
            }
            n++;
        }
    }

    return 0;
}
