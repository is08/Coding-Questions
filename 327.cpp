#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int availableRam = k;

        while(1){
            int flag, Count = 0;
            for(int i = 0; i < n; i++){
                flag = 0;
                if(a[i] <= availableRam && a[i] > 0){
                    availableRam += b[i];
                    a[i] = 0;
                    Count++;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0 || Count == n)
                break;
        }
        cout << availableRam << endl;
    }
    return 0;
}
