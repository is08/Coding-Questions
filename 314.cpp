#include<iostream>
using namespace std;

int main(){
    int testCases, n;
    cin >> testCases;

    while(testCases--){
        cin >> n;
        int r1, r2, r3, g1, g2, g3, b1, b2, b3, Count = 0;

        cin >> r1 >> g1 >> b1;
        cin >> r2 >> g2 >> b2;
        cin >> r3 >> g3 >> b3;

        if(g1 > 0 && r2 > 0){
            int Min = min(g1, r2);
            g1 -= Min;
            r2 -= Min;
            g2 += Min;
            r1 += Min;
            Count += Min;
        }
        if(b1 > 0 && r3 > 0){
            int Min = min(b1, r3);
            b1 -= Min;
            r3 -= Min;
            b3 += Min;
            r1 += Min;
            Count += Min;
        }

        if(b2 > 0 && g3 > 0){
            int Min = min(b2, g3);
            b2 -= Min;
            g3 -= Min;
            b3 += Min;
            g2 += Min;
            Count += Min;
        }

        cout << Count << endl;

    }
    return 0;
}
