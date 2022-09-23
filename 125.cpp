#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        int sum = 0;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }

        if(sum % 2 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }

    return 0;
}
