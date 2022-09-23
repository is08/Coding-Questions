#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        double arr[n];
        int flag = 0, full = 0;
        double sum = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }

        double avg = sum / n;

        for(int i = 0; i < n; i++){
            if(arr[i] == 2){
                flag = 1;
                break;
            }

            if(arr[i] == 5){
                full = 1;
            }
        }

        if(full == 1 && avg >= 4.0 && flag != 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
