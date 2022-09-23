#include<iostream>
using namespace std;

int main(){
    int test, x, m, d;
    cin >> test;

    while(test--){
        cin >> x >> m >> d;
        int time_taken = x * m;
        int upper = x + d;

        int last = min(time_taken, upper);

        cout << last << endl;
    }

    return 0;
}
