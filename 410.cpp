#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n, greater<int>());

        int maximum = -1000, sum;

        for(int i = 0; i < n; i++){
            sum = a[i] + b[i];
            maximum = max(maximum, sum);
        }

        cout << maximum << endl;
    }

    return 0;
}
