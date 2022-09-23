#include<iostream>
using namespace std;

int main(){
    int test;
    long long int x, y;
    cin >> test;

    while(test--){
        cin >> x >> y;

        while(x != y && x != 0 && y != 0){
            if(x < y){
                y = y - x;
            }
            else if(x > y){
                x = x - y;
            }
        }

        cout << x + y << endl;
    }

    return 0;
}
