#include<iostream>
using namespace std;

int main(){
    long long int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        long long int input, sum = 0;

        for(int i = 0; i < n; i++){
            cin >> input;
            input = input % k;
            sum += input;
        }

        cout << sum % k << endl;
    }

    return 0;
}
