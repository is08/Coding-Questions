#include<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        int sum = 0;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            int ans = arr[i] % k;

            if(arr[i] >= k){
                sum = sum + min(ans, k - ans);
            }
            else{
                sum = sum + k - ans;
            }
        }

        cout << sum << endl;
    }

}
