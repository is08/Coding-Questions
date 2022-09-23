#include<iostream>
using namespace std;

int main(){
    int test, p;
    cin >> test;
    int arr[5];

    while(test--){
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }

        cin >> p;
        double sum = 0;

        for(int i = 0; i < 5; i++){
            sum = sum + arr[i] * p;
        }

        double div = sum / 24;

        if(div <= 5)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
