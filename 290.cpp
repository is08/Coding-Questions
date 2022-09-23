#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a+n, greater<int>());
        int Count = 1;

        for(int i = 1; i < n; i++){
            if(a[i] != 0){
                if(a[i] != a[i - 1]){
                    Count++;
                }
            }
        }

        cout << Count << endl;
    }

    return 0;
}
