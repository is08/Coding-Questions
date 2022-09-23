#include<iostream>
using namespace std;

int main(){
    int t, x1, x2, y1, y2, z1, z2;
    cin >> t;

    while(t--){
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if(x2 < x1){
            cout << "NO" << endl;
        }
        else if(y1 > y2){
            cout << "NO" << endl;
        }
        else if(z1 < z2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
