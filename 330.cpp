#include<iostream>
using namespace std;

int main(){
    int t, x, y, z;
    cin >> t;

    while(t--){
        cin >> x >> y >> z;

        if(y <= x){
            cout << "PIZZA" << endl;
        }
        else if(z <= x){
            cout << "BURGER" << endl;
        }
        else{
            cout << "NOTHING" << endl;
        }
    }

    return 0;
}
