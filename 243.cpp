#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int arr, flag = 0;

        for(int i = 0; i < n; i++){
            cin >> arr;

            if(arr % 2 == 0){
                flag = 1;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
