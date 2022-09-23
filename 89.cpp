#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    int arr[n];


    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int count = 0;

    for(int i = n-1; i >= 0; i--){
        while(arr[i] != x){
            for(int k = 0; k <= i; k++){
                arr[k] = (arr[k] + 1) % m;
            }
            count++;
        }
    }
    cout<<count<<endl;
}
