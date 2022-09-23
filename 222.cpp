#include<iostream>
using namespace std;

int main(){
    int test, a, b, x;
    cin >> test;

    while(test--){
        cin >> a >> b >> x;

        cout << (b - a) / x << endl;
    }
    return 0;
}
