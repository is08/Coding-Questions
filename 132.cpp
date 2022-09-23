#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int arr[n], b[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = (i + 1); j < n; j++){
                if(arr[j] > arr[i]){
                    count++;
                }
            }
            b[i] = count;
        }

        for(int i = 0; i < n; i++){
            cout << b[i] << " ";

        }

        cout << endl;
    }

    return 0;
}
