#include<iostream>
using namespace std;

int main(){
    int test, x, y, z;
    cin >> test;

    while(test--){
        cin >> x >> y >> z;

        if(x == y + z || y == x + z || z == x + y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
