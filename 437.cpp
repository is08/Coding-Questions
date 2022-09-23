#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long int N, k, p;

    while(t--){
        cin >> N >> p >> k;

        cout << (p%k) * (N/k) + p/k+1 + min(N%k, p%k) << "\n";
    }

    return 0;
}
