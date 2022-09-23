#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int l;
        vector<int> freq(101);

        for(int i = 0; i < n; i++){
            cin >> l;
            freq[l]++;
        }

        int total = n;

        for(int i = 1; i < 101; i++){
            total += freq[i] % 2;
        }

        total += total % 4;
        cout << total - n << endl;
    }

    return 0;
}
