#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int arr[n];
        int freq[n] = {1};

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i - 1]){
                freq[i] = freq[i - 1] + 1;
            }
            else{
                freq[i] = 1;
            }
        }

        sort(freq, freq + n);

        cout<<n - freq[n - 1]<<endl;

    }

    return 0;
}
