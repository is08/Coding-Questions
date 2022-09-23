#include<iostream>
using namespace std;

int main(){
    int test, n, k, v;
    cin >> test;

    while(test -- ){
        cin >> n >> k >> v;
        int arr[n];
        int sum1 = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum1 = sum1 + arr[i];
        }

        int sum2 = v * (n + k);


        if((sum2 - sum1) % k == 0 && sum2 > sum1){
            cout << (sum2 - sum1) / k << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }

    return 0;
}
