#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        cout << arr[0] << endl;
    }

    return 0;
}
