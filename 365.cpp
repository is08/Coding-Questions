#include<iostream>
using namespace std;

int main(){
    int t, g, c;
    cin >> t;

    while(t--){
        cin >> g >> c;

        cout << (c * c) / (2*g) << endl;
    }

    return 0;
}
