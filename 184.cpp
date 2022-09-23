#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << (2 * (i + j)) + j  << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
