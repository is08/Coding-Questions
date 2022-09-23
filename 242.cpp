#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int arr[n], sum = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for(int i = 0; i < n/2; i++){
            sum = sum + abs(arr[n - i - 1] - arr[i]);
        }

        cout << sum << endl;
    }

    return 0;
}
