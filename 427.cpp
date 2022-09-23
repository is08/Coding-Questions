#include<iostream>
using namespace std;

int main(){
    int t, n, k, v;
    cin >> t;

    while(t--){
        cin >> n >> k >> v;
        int a[n], sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int remSame = v*(n + k) - sum;

        if(remSame > 0 && remSame % k == 0){
            cout << remSame/k << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }

    return 0;
}
