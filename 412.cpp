#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;
        cout << ((n-1)*(n-2)) + 1 << endl;
    }

    return 0;
}
