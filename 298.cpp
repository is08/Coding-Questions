#include<iostream>
using namespace std;

int main(){
    int t, l, r;
    cin >> t;

    while(t--){
        cin >> l >> r;
        int left = l*2, right = r * 2, Count = 0;

        for(int i = left; i <= right; i++){
            Count++;
        }

        cout << Count << endl;

    }

    return 0;
}
