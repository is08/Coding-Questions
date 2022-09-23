#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        long long ans = 0;

        sort(a, a+n);
        sort(b, b+n);

        for(int i = 0; i < n; i++){
            //cout << "min(a[i], b[i]) is " << min(a[i], b[i]) << endl;
            ans = ans + min(a[i], b[i]);
            //cout << "Ans is " << ans;
        }

        cout << ans << endl;
    }

    return 0;
}
