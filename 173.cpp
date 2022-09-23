#include<iostream>
using namespace std;

int main(){
    int test, n, x;
    cin >> test;

    while(test--){
        int flag = 0;

        cin >> n >> x;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            if(a[i] >= x){
                flag = 1;
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
