#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, k, flag = -1;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            flag = 1;
            break;
        }
    }


    cout << flag;

    return 0;
}
