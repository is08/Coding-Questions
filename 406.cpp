#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int a[n], ans = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        for(int i = (n - 1); i >= 0; i = i - 2){
            ans += a[i];
        }

        cout << ans << endl;
    }


    return 0;
}
