#include<iostream>
using namespace std;

int main(){
    int test, n, k, x, y;
    cin >> test;

    while(test--){
        cin >> n >> k >> x >> y;
        int initial_city = x, flag = 0;

        while(1){
            x = (x + k) % n;

            if(x == y){
                flag = 1;
                break;
            }
            //once it reaches the initial city -> it will just repeat the pattern
            if(x == initial_city){
                break;
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }



    }

    return 0;
}
