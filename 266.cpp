#include<iostream>
using namespace std;

int main(){
    int test, x, y , k , n;
    cin >> test;

    while(test--){
        cin >> x >> y >> k >> n;
        int diff = abs(y - x);

        int steps = diff % (2 * k);

        if(steps == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
