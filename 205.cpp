#include<iostream>
using namespace std;

int main(){
    int test, n, rem;
    cin >> test;

    while(test--){
        cin >> n;
        int count = 0;

        while(n){
            rem = n % 10;
            if(rem == 4){
                count++;
            }
            n = n / 10;
        }

        cout << count << endl;

    }

    return 0;
}
