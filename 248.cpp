#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        int maxi = a[n - 1] + a[n - 2];
        //cout << "maxi " << maxi << endl;
        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = (i + 1); j < n; j++){
                if(a[i] + a[j] == maxi){
                    //cout << "a[i] " << a[i] << " and a[j] " << a[j] << endl;
                    count++;
                }
            }
        }

        double total = n * (n - 1) / 2;
        cout << fixed << setprecision(9) << count/total << endl;

    }

    return 0;
}
