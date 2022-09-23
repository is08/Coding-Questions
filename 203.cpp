#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, k;
        cin >> n >> k;
        int girls[n];

        for(int i = 0; i < n; i++){
            cin >> girls[i];
        }

        int maxi = -10e5;

        for(int i = 0; i <= n - k; i++){
            int sum = 0;
            for(int j = 0; j < k; j++){
                sum = sum + girls[i + j];
            }
            maxi = max(maxi, sum);
        }


    }
    return 0;
}
