#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, k, s;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        s = (n + k) / 2;

        cout<<arr[s]<<endl;

    }

    return 0;
}
