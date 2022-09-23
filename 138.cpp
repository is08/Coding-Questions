#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int j = 1;

        for(int i = 0; i < n; i++){
            cout << j << " ";
            j = j + 2;
        }

        cout << endl;

    }

}
