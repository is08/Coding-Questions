#include<iostream>
using namespace std;

int main(){
    int test, n, b, m;
    cin >> test;

    while(test--){
        cin >> n >> b >> m;
        int a, j = -1, change = 0;

        for(int i = 0; i < m; i++){
            cin >> a;

            if(a/b != j){
                cout << "a/b is " << a/b << endl;
                change++;
                j = a / b;
            }
        }



        cout << change << endl;
    }

    return 0;
}
