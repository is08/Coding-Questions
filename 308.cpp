#include<iostream>
using namespace std;

int main(){
    int t, x;
    cin >> t;

    while(t--){
        for(int i = 1; i*i <= 1000; i++){
            cout << i*i << endl;
            cin >> x;

            if(x){
                break;
            }
        }
    }

    return 0;
}
