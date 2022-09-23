#include<iostream>
using namespace std;

int main(){
    int test, n, x, s, a, b, pos;
    cin >> test;

    while(test--){
        cin >> n >> x >> s;
        pos = x;

        while(s--){
            cin >> a >> b;
            if(pos == a){
                pos = b;
            }
            else if(pos == b){
                pos = a;
            }
            //cout << "current position is " << pos << endl;
        }

        cout << pos << endl;
    }

    return 0;
}
