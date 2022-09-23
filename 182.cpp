#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int a[n];
        int cost = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            cost = cost | a[i];
        }
    }

    return 0;
}
