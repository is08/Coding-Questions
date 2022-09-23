#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int max = -1e5, min = 1e5, i1, i2;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
                i1 = i;
            }
            if(arr[i] < min){
                min = arr[i];
                i2 = i;
            }
        }

        if(i1 < i2){
            cout << max << " " << min << endl;
        }
        else{
            cout << min << " " << max << endl;
        }

    }

    return 0;
}
