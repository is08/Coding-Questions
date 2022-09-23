#include<iostream>
using namespace std;

int main(){
    int t, n, a, b;
    cin >> t;

    while(t--){
        cin >> n >> a >> b;

        if(a != (b-1) && a != (b+1)){
            cout << "0" << endl;
        }
        else{
            if(a == 1 || b == 1){
                cout << "1" << endl;
            }
            else{
                cout << "2" << endl;
            }
        }
    }
    return 0;
}
