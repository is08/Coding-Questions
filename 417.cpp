#include<iostream>
#include<algorithm>
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

        cout << n - *max_element(a, a + n) << endl;
    }

    return 0;
}
