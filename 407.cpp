#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long int val = 1, b[n];
        b[n - 1] = 1;

        for(int i = (n - 2); i >= 0; i--){
            if(a[i] * a[i + 1] <= 0){
                val++;
            }
            else{
                val = 1;
            }
            b[i] = val;
        }

        for(int i = 0; i < n; i++){
            cout << b[i] << " ";
        }

        cout << endl;

    }

    return 0;
}
