#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, x, a[3];
    cin >> t;

    while(t--){
        cin >> x;
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        cout << (a[0]*(x - 1) + a[1]) << endl;
    }

    return 0;
}
