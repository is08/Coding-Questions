#include<iostream>
using namespace std;

int main(){
    int t, d, n;
    cin >> t;

    while(t--){
        cin >> d >> n;
        int flag = 0;

        while(d--){
            int rem = n % 10;

            if(rem == 5 || rem == 0){
                flag = 1;
                break;
            }

            n = n / 10;
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
