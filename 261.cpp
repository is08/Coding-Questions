#include<iostream>
using namespace std;

int main(){
    long long int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int s[n];

        long long int num = 0;

        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        for(int i = 0; i < (n - 1); i++){
            num = num + abs(s[i + 1] - s[i]) - 1;
        }

        cout << num << endl;

    }
}
