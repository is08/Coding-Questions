#include<iostream>
using namespace std;

int main(){
    int t, n, x, k;
    cin >> t;

    while(t--){
        cin >> n >> x >> k;
        int a[n], b[n], flag = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        for(int i = 0; i < n; i++){
            if(abs(a[i] - b[i]) <= k){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
