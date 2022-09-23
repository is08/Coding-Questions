#include<iostream>
using namespace std;

int main(){
    int test, s, w1, w2, w3;
    cin >> test;

    while(test--){
        cin >> s >> w1 >> w2 >> w3;

        int sum = w1 + w2 + w3;

        if (s >= sum)
            cout << "1" << endl;
        else if (s >= w1 + w2 || s >= w2 + w3)
            cout << "2" << endl;
        else
            cout << "3" << endl;

    }

    return 0;
}
