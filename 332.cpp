#include <iostream>
using namespace std;

int main(){
    int t, n, x, p;
    cin >> t;

    while(t--){
        cin >> n >> x >> p;

        int score = (x*3) - (n-x);

        if(score >= p){
            cout << "PASS" << endl;
        }
        else{
            cout << "FAIL" << endl;
        }
    }

    return 0;
}
