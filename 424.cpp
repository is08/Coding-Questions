#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, flag = 0;
        cin >> n;

        long long int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }


        for(int i = 1; i < n; i++){
            if(abs(a[i] - a[i - 1]) > 1){
                flag = 1;
                break;
            }
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
