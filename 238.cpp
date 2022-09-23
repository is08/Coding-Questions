#include<iostream>
using namespace std;

int main(){
    int t, n, maxi = -10e5;
    cin >> t;

    while(t--){
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n ; i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                sum = sum + abs(arr[i] - arr[j]);
            }
            maxi = max(maxi, sum);
        }

        cout << maxi << endl;

    }

    return 0;
}
