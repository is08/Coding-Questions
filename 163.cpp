#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int arr[n], sum;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }

        if(sum < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}
