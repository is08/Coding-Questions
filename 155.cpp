#include<iostream>
using namespace std;

int main(){
    int test, n;
    long long int k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        long long int a[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];

        int flag = 0, i;

        for(i = 0; i < n; i++){
            cout << "a[i] is " << a[i] << endl;
            if(a[i] >= k){
                a[i + 1] = a[i] - k + a[i + 1];
            }
            else{
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO " << i<< endl;
    }

    return 0;
}
