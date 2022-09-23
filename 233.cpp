#include<iostream>
#include<map>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];
        map<int, int> count;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            count[a[i]]++;
        }

        cout << (count[0] * (count[0] - 1)) / 2 + (count[2] * (count[2] - 1) / 2) << endl;


    }

    return 0;
}
