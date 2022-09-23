#include<iostream>
using namespace std;

int main(){
    int test, n, k, ele;
    cin >> test;

    while(test--){
        cin >> n >> k;
        int arr[n], arr2[n];


        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % k == 0){
                arr2[i] = 1;
            }
            else{
                arr2[i] = 0;
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr2[i];
        }

        cout << endl;
    }

    return 0;
}
