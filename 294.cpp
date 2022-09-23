#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n], count_pairs = 0;

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++){
            for(int j = n; j > i; j--){
                if((a[i] & a[j]) == a[i]){
                    count_pairs++;
                    //cout << "i is " << i << " and j is " << j << endl;
                }
            }
        }

        cout << count_pairs << endl;
    }

    return 0;
}
