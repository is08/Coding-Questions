#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long int> a(n), b(n), c(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        partial_sort(b.begin(), b.begin() + n/2, b.end());
        partial_sort(b.begin() + n/2, b.end(), b.end(), greater<long long int>());

        for(int i = 0; i < n; i++){
            long long int temp = a[i] + b[i];
            c[i] = temp;
        }

        sort(c.begin(), c.end());

        cout << c[n / 2] << "\n";

    }
    return 0;
}
