#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int countOfMishearing = 0;

        for(int i = 1; i < (n - 1); i++){
            if(a[i] != a[i + 1]){
                countOfMishearing++;
            }
            if(a[i] != a[i - 1]){
                countOfMishearing++;
            }
        }

        if(a[n - 1] != a[n - 2]){
            countOfMishearing++;
        }

        cout << countOfMishearing << endl;
    }

    return 0;
}
