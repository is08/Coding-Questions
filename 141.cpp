#include<iostream>
using namespace std;

int main(){
    int test,a, b;
    cin >> test;

    while(test--){
        cin >> a >> b;
        int flag = 0;

        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }

        if(a == b + 2 || b == a + 2){
        }
        else if((a - 1) % 2 == 0 && (b - 2) % 2 == 0 && (a - 1) / 2 == (b - 2) / 2){
        }
        else{
            flag = 1;
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
