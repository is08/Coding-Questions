#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int s[n];

        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        sort(s, s + n, greater<>());
        int count = 0;

        for(int i = 0; i < n; i++){
            if(s[i] >= s[k - 1]){
                count++;
            }
        }

        cout << count << endl;

    }

    return 0;
}
