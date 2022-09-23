#include<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        int p[n];
        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < n; i++){
            cin >> p[i];
            sum1 = sum1 + p[i];

            if(p[i] > k){
                p[i] = k;
            }

            sum2 = sum2 + p[i];
        }

        cout<<sum1 - sum2 <<endl;

    }

    return 0;
}


