#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n, x;
    cin >> test;

    while(test--){
        cin >> n >> x;
        long long int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);
        int distinct = 1;

        for(int i = 1; i < n; i++){
            if(a[i] != a[i - 1]){
                distinct++;
            }
        }

        int y = n - x;

        if(distinct > y){
            cout << y << endl;
        }
        else{
            cout << distinct << endl;
        }

    }

    return 0;
}
