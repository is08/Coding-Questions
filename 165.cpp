#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, q, test;
    cin >> n >> q;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while(q--){
        cin >> test;
        if(n == 1){
            if(arr[0] == test){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            if(min(arr[0], arr[n - 1]) <= test && test <= max(arr[0], arr[n - 1])){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }


    return 0;
}
