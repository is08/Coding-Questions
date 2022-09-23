#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int v[n];
        int diff = 1e6;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v, v + n);

        for(int i = 1; i < n ; i++){
           diff = min(diff, v[i] - v[i - 1]);
        }


        cout << diff << endl;
    }
    return 0;
}
