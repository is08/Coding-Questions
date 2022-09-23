#include<iostream>
using namespace std;

int main(){
    int test, amin, bmin, cmin, tmin, a, b, c;
    cin >> test;

    while(test--){
        cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
        int flag = 0;

        if(a < amin || b < bmin || c < cmin){
            flag = 1;
        }

        if(a + b + c < tmin){
            flag = 1;
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

}
