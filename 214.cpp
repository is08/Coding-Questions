#include<iostream>
using namespace std;

int main(){
    int test, n, k, l;
    cin >> test;

    while(test--){
        cin >> n >> k >> l;

        if(k * l < n){
            cout << "-1" << endl;
            continue;
        }

        int temp = 1, j = 1;

        for(int i = 0; i < n; i++){
            if(temp > k){
                temp = 1;
                j++;
            }
            cout << temp * j << " ";
            temp++;
        }
        cout << endl;
    }

    return 0;
}
