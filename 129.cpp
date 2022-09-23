#include<iostream>
using namespace std;

int main(){
    int test, n, m;
    cin >> test;

    while(test--){
        cin >> n >> m;

        if((n * m) % 2  == 0){
            cout << "Yes" << endl;
        }
        else if ((n * m) % 2 == 1){
            cout << "No" << endl;
        }

    }

}
