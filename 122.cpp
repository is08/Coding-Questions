#include<iostream>
using namespace std;

int main(){
    int test, m, n;
    cin >> test;

    while(test--){
        cin >> m >> n;
        cout << ((m + n - 2) + ((m - 1) * (n - 1) * 2))<<endl;
    }

    return 0;
}
